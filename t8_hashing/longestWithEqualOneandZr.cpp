#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int lenSubArr(vector<int>arr)
{
     unordered_map<int,int>ump;
       int pre = 0 , length = 0;
       for(int i=0;i<arr.size();i++)
       {
           if(arr[i] == 0) pre+=-1;
           else pre+=arr[i];

            if( pre == 0) length = i+1;
            else if(ump.find(pre) != ump.end())
            {
                 length = max(length , i-ump[pre]);
            }
           else
            ump[pre] = i;
          
       }
       return length;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

        vector<int>arr;
          int n;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                  int x; cin>>x;
                   arr.push_back(x);
            }

       int x = lenSubArr(arr); 
        cout<<x<<"\n";

return 0;
}