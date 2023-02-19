#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/*
Topological sorting :- 
            0
        /       \ 
        1       2 
        
        0,1,2 or 0 ,2,1
    
    if we assume all the vertices as jobs then
    0 must be finish earlier than 1,2 and 
    there is no dependency b/w 1,2 so they can be print in any order.

BFS based solution:-(Kahn's BFS Based Algortihm)
    1. Store indegree of every vertex
    2. create a queue , q
    3. add all 0 indegree vertices in the q
    4. while(q is not empty)
        {
            a> u = q.pop()
            b> print u
            c> for every adjacent v of u
                (i) reduce indegree of v by 1
                (ii) if indegree of  v becomes 0 add v to q.
        }
*/

void topological(vector<int>arr[],int n)
{
    int indeg[n] = {0};
    // calculating indegree
    for(int i=0;i<n;i++)
    {   
        for(auto it:arr[i])
        {
            indeg[it]++;
        }
    }

    // inserting 0 indegree vertices in the queue
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        if(indeg[i]==0)
            q.push(i);
    }

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(auto it:arr[u])
        {
            indeg[it]--;
            if(indeg[it]==0)q.push(it);
        }
    }


}

int main()
{

    vector<int>garph[6];
    garph[0] = {1,2};
    garph[1] = {3};
    garph[2] = {3};
    garph[3] = {4,5};
    garph[4] = {};
    garph[5] = {};

    topological(garph,6);
    



return 0;
}























