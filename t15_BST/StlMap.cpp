#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
map in c++ STL

it is also build using red black trees

it stores key value pairs

elements in the map are ordered by keys , by default in incresing order
 
 O(1)
 begin() , end() , rbegin() , rend() , size() , empty() , cbegin() , cend(),crend(),crbegin()
 O(logn)
 count() , find() , erase(key) , insert() , [] , at()
*/ 
int main()
{
    map<int,int>mp;
    mp.insert({10,20});
    mp[5] = 10;
    mp[5] = 50; // this key insertion will be ignored because the key already exists , and the value will be updated.
    for(auto &x: mp)
    cout<<x.first<<":"<<x.second<<"\n";

    /* difference between insert() and []

    mp.insert({10,20}) if 10 alerady exists then the size will not increase
    cout<<mp[30]  if 30 does not exists then size will increase and a new key value pair will be created
    */
//    cout<<mp[40]<<"\n"; 

    // at() operator
    mp.at(5) = 400; // unlike [] , if key is not present it give out of range exception

    // begin() and clear() functions are same as they are in set or other containers
    /* find() functions
    it takes key  if it exists then it returns iterator to key and if not exists then it returns end()*/
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<":"<<it->second<<"\n";
    }
    //count() , erase() function is same as it was in set
    /* lower_bound() , upper_bound() -> same as it was in set , it returns iterator to key or pair and it compares key.*/

return 0;
}