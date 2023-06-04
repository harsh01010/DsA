#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void f(string &digits,int i,unordered_map<char,string>&ump,string &temp,vector<string>&ans)
    {
        if(temp.size()==digits.size())
        {
            ans.push_back(temp);
            return;
        }
        if(i == digits.size())
        {
            return;
        }

        string curr = ump[digits[i]];
        for(int j=0;j<curr.size();j++)
        {
            temp.push_back(curr[j]);
            f(digits,i+1,ump,temp,ans);
            temp.pop_back();
            f(digits,i+1,ump,temp,ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits == "") return ans;
        string temp;
        int ind = 0;
        unordered_map<char,string>ump;
        ump['2'] = "abc";
        ump['3'] = "def";
        ump['4'] = "ghi";
        ump['5'] = "jkl";
        ump['6'] = "mno";
        ump['7'] = "pqrs";
        ump['8'] = "tuv";
        ump['9'] = "wxyz";
        f(digits,ind,ump,temp,ans);
        return ans;
        
    }
int main()
{



return 0;
}