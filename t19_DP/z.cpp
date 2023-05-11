#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int f(string s, string ss)
{
    unordered_map<char, int> mp1, mp2;
    unordered_set<char> st;
    for (auto it : s)
    {    mp1[it]++; st.insert(it); }
    for (auto it : ss)
    {   mp2[it]++; st.insert(it); }

    int res = 0;
    for(auto it:st)
    {
        if(mp1.find(it) != mp1.end())
        {
            if(mp2.find(it) != mp2.end())
            { cout<<max(mp1[it],mp2[it])<<"\n";    res += max(mp1[it],mp2[it]);}
            else
            {   cout<<mp1[it]<<"\n";    res += mp1[it];}
        }
        else
            res += mp2[it];
    }

    
    
    return res;
    
    

    
    return res;
}

int main()
{
    string s, ss;
    cin >> s >> ss;
    cout << f(s, ss) << "\n";

    return 0;
}