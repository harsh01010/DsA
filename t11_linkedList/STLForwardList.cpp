/*
  Forwardlist in STL

    -> This is single linked list 
    ->few abailable operations:
    operators: assign , front , empty , max_size , clear , inert_after , emplace_after , reverse
    , sort , merge , splice_after, unique , remove , remove_if , resize

*/

/*

  list in STL
  -> this is doubly linked list
  ->it is a sequence cnontainer
  ->
  assign , front  , back , empty , size , clear , inert , push_back , pop_back ,
  push_front , pop_front , reverse , sort , merge , splice , unique ,remove , remove_if , resize.
  */




#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    

     forward_list<int>list1 = {5,6,2,1};
     forward_list<int>list2 = {1,2,4,5};
     list1.insert_after(list1.before_begin() , 54);
     list1.reverse();
     list1.sort();
     list2.sort();
     list1.merge(list2); // both should be sorted
     list1.insert_after(list1.before_begin() , 44);
     for(auto &ele:list1) cout<<ele<<" ";
          cout<<"\nsize of list is:"<<distance(list1.begin() , list1.end());

  

return 0;
}