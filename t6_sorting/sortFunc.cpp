
#include<bits/stdc++.h>
#define ll long long
using namespace std;

 class point{
      public:
       int x, y;
 };

bool comp(point a , point b)
 {
      return a.x < b.x ;
 }
 bool comp2(point a , point b)
 {
      return a.y > b.y;
 }
int main()
{  
  /*  // sort function in stl
      sort(p1 , p2 , p3) p3 -> comparator function ,
                                  defines order of sorting
  sort can be used on random access containers:
   array , vector,deque

   -> sort function has a time complexity of O(nlogn)
      it used Introsort(hybrid of quicksort , heapsort and insertion sort)
      */

    point arr[] = {{2,3},{9,22},{0,1},{3,2}};

      int  n = sizeof(arr)/sizeof(arr[0]);
      sort(arr,arr+n,comp);
      for(auto i:arr) cout<<i.x<<" "<<i.y<<"\n";

      sort(arr,arr+n,comp2);
      for(auto i:arr)cout<<i.x<<" "<<i.y<<"\n";


return 0;
}