#include<bits/stdc++.h>
using namespace std;

bool func(string s , int l ,int h){
    if(l>=h)
     return true;
     if(s[l]!=s[h])
      return false;
      return func(s,l+1,h-1);
    
}
int main(){

   int t;
     cin>>t;
       while(t--){
         string s;
           cin>>s;
           int n = s.length() - 1;
             if(func(s , 0 , n))
               cout<<"string is palindrome\n";
               else
                 cout<<"string is not palindrome\n";
       }

  return 0;
}