#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
    Set in C++

    set is used to store sorted set or stream of data.

    set ignores duplicate values


    set uses Red Black Trees 

    begin() , end()
    rbegin(),rend()
    cbegin(),cend()
    size(),empty()
    all above are O(1)

    insert() , find()
    count() , lower_bound()
    upper_bound() , erase(val)
    above are O(logn)

    erase(it)  -> amortized O(1)
*/
int main()
{

    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for (int x : s)
        cout << x << " ";
    cout << "\n";
    set<int, greater<int>> st; // decreasing order
    st.insert(2);
    st.insert(12);
    st.insert(99);
    st.insert(0);

    for (auto i = st.begin(); i != st.end(); i++) // auto can be replaced as set<int>::iterator
    {
        cout << (*i) << ' ';
    }
    cout << "\n";
    for (auto it = st.rbegin(); it != st.rend(); it++) // reverse iterator , it++ will move in reverse direction
    {
        cout << (*it) << " ";
    }
    cout << "\n";
    set<int>::iterator j = s.find(10); // if not find returns s.end()
    cout << *j << "\n";

    s.clear();
    int x = s.size();     // size = 0
    int y = st.count(20); // since set stores distinct elements , hence it returns 0 or 1;

    // erase() , it is used to remove an element from set , we can pass the element or it's iterator
    st.erase(0);
    auto it = st.find(99);
    st.erase(it);
    // we can also erase() to remove range of items
    it = st.find(12);
    st.erase(it, s.end()); // remove every thing from it , before s.end();

    /* lower_bound(x)
     ->if x is present then it return iterator to x
     ->if x is not present but it is smaller than the largest element in set then it return iterator to element which is just larger than x.
     ->else if x is greater than the greatest element in the set then it returns s.end()
    */
   st.insert(33);
   st.insert(44);
   st.insert(55);
   it = st.lower_bound(32); // returns iterator to 33

   /* upper bound(x)
    ->if x is present it returns iterator to next element , or just greater than element in set
    ->if x is not present but it is smaller than the largest element in set then it return iterator to element which is just larger than x.
    ->else if x is greater than the greatest element in the set then it returns s.end()
    return 0;
    */
}