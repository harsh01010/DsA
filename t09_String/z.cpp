#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  
     string key = "222333444555666777788888999";

      string inp; cin>>inp;
       string ans = "";
       for(int i=0;i<inp.length();i++)
         ans.push_back(key[inp[i] -'a']);

         cout<<ans<<"\n";



return 0;
}