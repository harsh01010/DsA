#include<bits/stdc++.h>
using namespace std;

  void func(string s , string ans="",int i=0){
      if(i == s.length()){
          cout<<ans<<"\t";
           return;
      }
      func(s,ans,i+1);
      func(s,ans+s[i],i+1);
  }

int main(){

string s;
  cin>>s;
    func(s);

    return 0;
}