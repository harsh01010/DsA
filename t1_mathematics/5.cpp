#include<iostream>
#define ll long long
#define REP(a,n)  for(long long int i=a;i<n;i++)
using namespace std;



int main()
{
    int n;
      cin>>n;
        for(int i=2;i*i<=n;i++){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            while(cnt--) cout<<i<<" ";
        }

        if(n>1) cout<<n<<endl;



return 0;
}