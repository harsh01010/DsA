#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
 

int longestWithZrSum(int aux[] , int m)
{
      int pre = 0;
       unordered_map<int,int>ump;
         int len = 0;
         for(int i=0;i<m;i++)
         {
              pre +=aux[i];

              if(pre == 0) len = i+1;
              else if( ump.find(pre) != ump.end() ) len = max(len , i - ump[pre]);
              else
               ump[pre] = i;

         }
         return len;
}

int longestWithEqulazrOndONe(int arr[] , int brr[] , int m)
{
       int aux[m];
         for(int i=0;i<m;i++)
           aux[i] = arr[i] -brr[i];

           return longestWithZrSum(aux , m);

}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

        int n ;
          cin>>n;
           int arr[n] , brr[n];
           for(int i=0;i<n;i++) cin>>arr[i];
           for(auto &it:brr) cin>>it;
        int ans =  longestWithEqulazrOndONe(arr,brr,n);
        cout<<ans<<"\n";



return 0;
}