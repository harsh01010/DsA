#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string removeSingleLineComments(const string &line)
{
   string result;
   bool inString = false;
   for (int i = 0; i < line.length(); i++)
   {
      if (line[i] == '"')
      {
         inString = !inString;
      }
      if (!inString && line[i] == '/' && i + 1 < line.length() && line[i + 1] == '/')
      {
         break;
      }
      result += line[i];
   }
   return result;
}

string removeMultiLineComments(const string &code)
{
   string result;
   bool inComment = false;
   for (int i = 0; i < code.length(); i++)
   {
      if (!inComment && i + 1 < code.length() && code[i] == '/' && code[i + 1] == '*')
      {
         inComment = true;
         i++;
      }
      else if (inComment && i + 1 < code.length() && code[i] == '*' && code[i + 1] == '/')
      {
         inComment = false;
         i++;
      }
      else if (!inComment)
      {
         result += code[i];
      }
   }
   return result;
}

int main()
{
   string inputFileName = "input.cpp";
   string outputFileName = "output.cpp";
   ifstream inputFile(inputFileName);
   ofstream outputFile(outputFileName);

   if (!inputFile)
   {
      cerr << "Error: Could not open input file." << endl;
      return 1;
   }

   if (!outputFile)
   {
      cerr << "Error: Could not create output file." << endl;
      return 1;
   }

   string line;
   while (getline(inputFile, line))
   {
      line = removeSingleLineComments(line);
      outputFile << line << '\n';
   }

   inputFile.close();
   outputFile.close();

   cout << "Comments and whitespaces removed. Check the output in " << outputFileName << endl;

   return 0;
}
