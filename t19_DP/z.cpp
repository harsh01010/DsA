#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{

    vector<string>v;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        string x,y; 
        
        fflush(stdin);
        getline(cin,x);
        cout<<x.length()<<"\n";
        for(auto it:x)
        {    if(it!=' ')y.push_back(it);
        
        }
        v.push_back(y);
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


    //vector<string>ans;
    int oper=0,var=0,kwd=0;
    cout<<v.size()<<"\n";
    vector<string>ans;
    
    for(auto it:v)
    {
        cout<<it<<"\n";
        for(auto i:it)
        {

        }
    }
    


















































return 0;
}