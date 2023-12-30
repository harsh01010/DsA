#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;



pair<int,int> search(vector<vector<int>>arr , int ser)
{
           int n = arr.size();
            int m = arr[0].size();
      int topRightX = 0 , topRightY = m-1;
       while(topRightX < n and topRightY>=0)
       {
              if(arr[topRightX][topRightY] == ser) return {topRightX,topRightY};

              else if(arr[topRightX][topRightY] > ser ) topRightY--;

              else topRightX++;
       }

       return {-1,-1};

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

        vector<vector<int>>arr;
           int n,m; cin>>n>>m;
         for(int i=0;i<n;i++)
         {
             vector<int>tp;
             for(int j=0;j<m;j++)
             {
                 int x; cin>>x;
                  tp.push_back(x);
             }
             arr.push_back(tp);
         }
          int t; 
           cout<<"enter total number of elements to  be  searched\n";cin>>t;
           while(t--)
           {
       int ele;
        cin>>ele;
  pair<int,int>pos = search(arr,ele);

    cout<<pos.first<<" "<<pos.second<<"\n";
           }

return 0;
}


/*

                   1 2 3 4   -> start from top right or bottom left -> if the key is 
                                smaller than this element then decrement calumn 
                                  if key is greater then increase the row, else return the element
                   5 6 7 8

                   9 10 11 12

                   13 14 15 16

*/
  