#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


unordered_map<string,int>ump;
bool isScramble(string a , string b)
{
     if(a==b) return true;
        if(a.length() != b.length()) return false;
        if(a.length() <= 1) return false;
        
        int n = a.length();
        for(int i=1;i<=n-1;i++)
        {   string s1 = a.substr(0,i) , s2 = b.substr(n-i,i) , s3 = a.substr(i,n-i) , s4 =  b.substr(0,n-i);
           if(ump.find(s1+" "+s2) == ump.end())
           {
               ump[s1+" "+s2]  = (int)isScramble(s1,s2);
           }
           int x = ump[s1+" "+s2];
          
          if(ump.find(s3+" "+s4) == ump.end())
           {
               ump[s3+" "+s4]  = (int)isScramble(s3,s4);
           }
           int y =  (int)ump[s3+" "+s4];
           
           
           if(x==y==1) return true;
           
           else
            { 
                s2 = b.substr(0,i) , s4 = b.substr(i,n-i);
            if(ump.find(s1+" "+s2) == ump.end())
           {
               ump[s1+" "+s2]  = (int)isScramble(s1,s2);
           }
           int x = ump[s1+" "+s2];
          
          if(ump.find(s3+" "+s4) == ump.end())
           {
               ump[s3+" "+s4]  = (int)isScramble(s3,s4);
           }
           int y = (int)ump[s3+" "+s4];
           
           if(x==y==1) return true;
            }
        }
        
        return false;

}


int main()
{
    string a , b; 
    cin>>a;
    cin>>b;

    if(isScramble(a,b)) cout<<"YES\n";
    else cout<<"NO\n";


return 0;
}