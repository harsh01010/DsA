#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


void sortt(int arr[] , int n , int brr[] , int m)
{

    vector<int>temp;
      map<int,int>omp;
       for(int i=0;i<n;i++) omp[arr[i]]++;
       for(auto it:omp) cout<<it.first<<"->"<<it.second<<"\n";

         for(int i=0;i<m;i++)
         {
              int x = brr[i];
               if(omp.find(x) != omp.end())
               {
                      int t = omp[x];
                      for(int i=0;i<t;i++) cout<<x<<" ";
                      omp.erase(x);
               }
               else temp.push_back(x);
         }       
         
         for(auto it:omp)
         {
             int t = it.second;
              for(int i=0;i<t;i++)
               cout<<it.first<<" ";
         }
}


int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

     int n ,m;
       cin>>n>>m;
         int arr[n] , brr[m];
          for(auto &it:arr) cin>>it;
          for(auto it:arr)cout<<it<<" "; cout<<"\n";

          for(auto &it:brr) cin>>it;
          for(auto it:brr) cout<<it<<" "; cout<<"\n";

     sortt(arr,n,brr,m);

return 0;
}