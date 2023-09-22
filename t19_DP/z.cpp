#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    vector<string>v;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        fflush(stdin);
        string x; getline(cin,x);
        v.push_back(x);
        fflush(stdin);
    }

    unordered_set<char>delim;
    delim.insert('=');
    delim.insert('+');
    delim.insert('-');
    delim.insert('/');
    delim.insert('*');

    unordered_set<string>keywords;
    keywords.insert("int");
    keywords.insert("float");
    keywords.insert("char");

    unordered_set<string>operators;
    operators.insert("-");
    operators.insert("+");
    operators.insert("/");
    operators.insert("*");


    vector<string>ans;
    int oper=0,var=0,kwd=0;

    for(auto it:v)
    {
        string temp;
        for(auto i:it)
        {  if(i==' ') 
            {
                ans.push_back(temp);
                temp.clear();
            }
            if(delim.find(i)==delim.end())
                temp.push_back(i);
            else{
                ans.push_back(temp);
                ans.push_back(string(1,i));
                temp.clear();
            }
        }
    }

    for(auto it:ans){ 
        if(keywords.find(it) != keywords.end()) kwd++;
        else if(operators.find(it) != operators.end()) oper++;
        else var++;

        cout<<it<<"\n";}

        cout<<kwd<<" "<<oper<<" "<<var<<"\n";



















































return 0;
}