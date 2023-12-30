#include<bits/stdc++.h>
#define ll long long
using namespace std;

 int findlar(vector<int>vec){
     int max = vec.at(0);
     for(int i=1;i<vec.size();i++){
         if(vec.at(i) > max)
          max = vec.at(i);
     }
     return max;
 }

int main()
{

    vector<int>vec;
     int n;
       cin>>n;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            vec.push_back(ele);
        }

        int lar = findlar(vec);

   cout<<"larges element is "<<lar<<endl;

return 0;
}