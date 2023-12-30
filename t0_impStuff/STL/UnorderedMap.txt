/*
 Unordered map:
 ->used to store key value pairs
 ->used hashing
 ->no order of pairs
 -> unordered map uses hashtable , map uses avl trees.
 */

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("i_p.txt", "r", stdin);
  freopen("o_p.txt", "w", stdout);
  #endif

      unordered_map <string,int>umap;

      umap["key 1"] = 4;   // how to  acess values with keys and if the 
                            // key is not present the isert is.
      umap["key 2"] = 7;
       umap["key 3"] = 4;
       cout<<umap.size()<<"\n";
      //  for(auto it:umap)
      // cout<<it.first<<" "<<it.second<<"\n";    

      for(auto i = umap.begin();i!=umap.end();i++)
          cout<<i->first<<" "<<i->second<<'\n';

          umap.insert({"hello" , 232});
    cout<<"after insertion\n";
for(auto i = umap.begin();i!=umap.end();i++)
          cout<<i->first<<" "<<i->second<<'\n';

if(umap.find("hello") != umap.end()) cout<<"found\n"; else cout<<"not find\n";
 umap.erase("hello"); cout<<umap.size()<<"\n";
 umap.erase(umap.begin(),umap.end()); cout<<umap.size()<<"\n";

  cout<<umap.count("key")<<"\n";

  int arr[] = {2,3, 5 ,3,4,2,5,6,3,5,56,3,3};


    unordered_map<int,int>cnt;
    for(auto it:arr)
    {
        int key = it;
        cnt[it]++;
    }

    for(auto x:cnt) cout<<x.first<<" "<<x.second<<"\n";
    cout<<"total number of distinct elements: "<<cnt.size()<<"\n";

return 0;
}