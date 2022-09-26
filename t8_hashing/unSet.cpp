/*
  Unordered set in c++
  -> it uses hash table to store keys
  -> does not maintain any key order
  -> unordered set uses hash table , set uses red black trees(binary search trees).
  -> on average : search , insert , delete -> on O(1) average.
  -> an element in unordered set can have a frequency of 0 or 1.

  // FUNCTIONS:
  insert()  , size() , clear() , count() , erase() , find() , begin(), end()

*/
   //  FUNCTIONS EXPLANATION WITH CODE 
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

    unordered_set<int>s;
      s.insert(10);
      s.insert(5);
      s.insert(15);
      s.insert(20);

      //for(auto it :s) cout<<it<<"\n";
      cout<<"Keys:\n";
     for(auto it = s.begin();it!=s.end();it++)
     {
         cout<<*it<<" ";
     }
     cout<<endl;
     cout<<"size\n:"<<s.size()<<"\n";
    
    int x; cin>>x;
    if(s.find(x)==s.end()) cout<<"entered key is not present in the hashtable\n";
    else cout<<"entered key is present in the hash table\n";
         if(s.count(x)) cout<<x<<" is present in  the hash table\n";
         else cout<<x<<" is not present in the hashtable\n";
    int xx; cin>>xx;
    if(s.find(xx) == s.end()) cout<<"cannot remove the entered key as it is not present in the hashtable\n";
    else{
           s.erase(x); cout<<xx<<" has been removed from the hashtable\n";
               cout<<"the size of the hash table after removing "<<xx<<" is "<<s.size()<<"\n";
    }


    // passing range in the erase function

      s.erase(s.begin(),s.end());

  cout<<"the size of the hash table after erasing all the elements is :"<<s.size()<<"\n";

  s.insert(33); s.clear();
      cout<<"the size of the hash table after clearing all the elements is :"<<s.size()<<"\n";



return 0;
}