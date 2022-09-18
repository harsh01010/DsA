#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int median(vector<vector<int>>arr)
{
      int row = arr.size() , clm = arr[0].size();
     // cout<<row<<" "<<clm<<"\n";
      int r1 = arr[0][0];
      int r2 = arr[0][0];
      for(int i=0;i<row;i++)
       {r1 = min(r1 , arr[i][0]);
         r2 = max(r2 , arr[i][clm-1]);         // our search space will be r1 to r2
       }
      // cout<<r1<<" "<<r2<<"\n";

       int ansInd = (row*clm - 1)/2;   // row*clm - (row*clm+1)/2;  // * assuming only total odd number of elements
        // ansInd will tell how many elements will be greate than our median
      // cout<<ansInd<<"\n";
        while(r1 <= r2)
        {
              int mid = (r1+r2) / 2;
            int u_B = 0;
              for(int i=0;i<row;i++)
              {
                 u_B +=(clm   - (upper_bound(arr[i].begin() , arr[i].end() , mid)  - arr[i].begin())); // tracking greater elements

              }
            //  cout<<u_B<<"\n";
            
              if(u_B == ansInd) return mid;
              else if(u_B > ansInd) r1 = mid+1;
              else r2 = mid-1;
        }
        return -1;
      
}


int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

     vector<vector<int>>arr;
      int n , m;
       cin>>n>>m;
       for(int i=0;i<n;i++)
       {       vector<int>tp;
           for(int j=0;j<m;j++)
           {  int x; cin>>x;
              tp.push_back(x);
              
           }
           arr.push_back(tp); 
       }


    cout<<median(arr);


return 0;
}