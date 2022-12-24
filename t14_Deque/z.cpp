#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
       int n;
       cin >> n;
       int k;
       cin >> k;
       int arr[n];
       for (auto &it : arr)
              cin >> it;

       deque<int> dq;

       // for (int i = 0; i < n; i++)
       // {
       //        if (dq.empty())
       //        {
       //               dq.push_front(i);
       //        }
       //        else
       //        {
       //              while(dq.front() <= i - k and !dq.empty())
       //                      dq.pop_back();

       //               while (arr[dq.back()] <= arr[i] and !dq.empty())
       //               {
       //                      dq.pop_back();
       //               }
       //               dq.push_back(i);
       //        }
       //        if (i >= k - 1)
       //               cout << arr[dq.front()] << " ";
       // }

       for(int i=0;i<k;i++)
       {
               while(!dq.empty() and arr[dq.back()] <= arr[i]) dq.pop_back();

               dq.push_back(i);
       }

       for(int i=k;i<n;i++)
       {
                cout<<arr[dq.front()]<<" ";

                while(!dq.empty() and dq.front() <= i-k) dq.pop_front();

                while(!dq.empty() and arr[dq.back()] <= arr[i]) dq.pop_back();

                dq.push_back(i);
       }

       cout<<arr[dq.front()]<<" ";
       return 0;
}