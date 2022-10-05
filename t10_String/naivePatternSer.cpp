#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int findPat(string str , string pat ,int i)
{   
       int upto = i+pat.length()-1;
     
       if(upto+1 > str.length()) return false;
       int x = 1;
       for(int j=i+1;j<=upto;j++)
       {
          if(str[j] != pat[x]) return false;
          x++;
       }
       return true;
}


vector<int> solve(string str ,string pat)
{
      int n = str.length() , m = pat.length();
      vector<int>ans;
          
           for(int i=0;i<n;i++)
           {
               if(str[i] == pat[0])
               {
                     
                    if(findPat(str,pat,i)) ans.push_back(i);
               }
           }

           return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

      int t;
       cin>>t;
        cin.ignore();
       while(t--)
       {
         string str ,pat;
           getline(cin,str);
           getline(cin,pat);

           vector<int>findAt = solve(str,pat);
        if(findAt.size() > 0)
           for(auto it:findAt) cout<<it<<" ";  
        else cout<<"no such patterens found1859";
        cout<<"\n";         
       }



return 0;
}


/* 
 3
aaaaa
aaa
abababcd
abab
abcabcd
abcd
 */