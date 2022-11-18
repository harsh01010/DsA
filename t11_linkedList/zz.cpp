#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int sod(int num)
{
        int ans = 0;
        while(num > 0)
        {
            ans = ans + num%10;
            num/=10;
        }
        return ans;
}

int main()
{
    
 /*
     int a ,b,k; cin>>a>>b>>k;
     int c = pow(a,b);

     int f = pow(10,k-1);

     cout<<(c/f)%10<<"\n";
*/

int num; cin>>num;
  while(num/10)
  {
      num = sod(num);
  }

  cout<<num<<"\n";


 



return 0;
}