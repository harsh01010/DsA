#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int getAns(int n)
{
  if(n/10==0)
    return n;
  int s = 0;
  while(n)
  {
    s += n%10; n/= 10;
  }
  return getAns(s);
    
}

int superDigit(string n, int k) {
  
  int num = 0;
  for(auto it:n)
    {num += (int)(it - '0');}
   cout<<num<<'\n'; 
  num *= k;
  cout<<"pass\n";
 cout<<num<<"\n";
  
  return getAns(num);
  
}

int main()
{
    
    string s; int k; 
    cin>>s>>k;
    cout<<superDigit(s,k)<<"\n";



return 0;
}