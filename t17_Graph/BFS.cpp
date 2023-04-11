#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
    BFS :
    for TREE -> level order traversal
    for graph -> print a vertex and it's adjacent vertices at a time.
*/
void BFS(vector<int> arr[], int v, int s = 0) // s = source -> s = 0
{

    unordered_map<int, bool> ump; // we can create an array also where indices will represent vertex and place a boolean value at arr[i].
    for (int i = 0; i < v; i++)
        ump[i] = false;  
    queue<int> q;
    q.push(s);
    ump[s] = true;     
    while (q.size())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (auto it : arr[x])
        {
            if (!ump[it])
            {
                q.push(it);
                ump[it] = true;
            }
        }
    }
}
// for disconnected graph (works on connected as well)

void BFS2(vector<int> arr[], unordered_map<int, bool> &ump, int s = 0) // s = source -> s = 0
{
    queue<int> q;
    q.push(s);
    ump[s] = true;
    while (!q.empty())
    {
        int x = q.front();
        cout << q.front() << " ";
        q.pop();

        for (auto it : arr[x])
        {
            if (!ump[it])
            {
                ump[it] = true;
                q.push(it);
            }
        }
    }
}
void BFS_Diss(vector<int> arr[], int v)
{
    int s = 0;
    unordered_map<int, bool> ump;
    for (int i = 0; i < v; i++)
        ump[i] = false;

    for (int i = 0; i < v; i++)
    {
        if (ump[i] == false)
            BFS2(arr, ump, i);
    }
}
void AddList(vector<int> arr[], int u, int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}

int main()
{
    int v = 6;

    vector<int> arr[v];

    // connected cyclic graph with 6 vertices
    AddList(arr, 0, 1);
    AddList(arr, 1, 2);
    AddList(arr, 2, 3);
    AddList(arr, 3, 4);
    AddList(arr, 4, 5);
    AddList(arr, 5, 0);

    BFS_Diss(arr, 6);
cout<<endl;
    // disconnected graph with 3 components
    v = 9;
    vector<int> arr2[v];
    AddList(arr2, 0, 1);
    AddList(arr2, 1, 2);
    AddList(arr2, 2, 0);

    AddList(arr2, 3, 4);
    AddList(arr2, 4, 5);
    AddList(arr2, 5, 3);

    AddList(arr2,6,7);
    AddList(arr2,7,8);
    AddList(arr2,8,6);

    BFS_Diss(arr2,9);

    return 0;
}

/*
    Some Application of Breadth first Search
    ->shortest path in an unweighted graph
    ->crawler in search engines
    -> peer to peer networks
    ->social networking search
    ->in garbage collection(cheney's algorithm)
    ->cycle detection
    ->ford fulkerson algorithm
    ->broadcasting

****************************************************************************************************************************************************************************************8/

// bfs on adjacency list and matrix
/*
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void AddMat(int **ad,int u,int v)
{
    ad[u][v] = 1;
    ad[v][u] =1;
}

void print(int **ad,int v)
{   
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(ad[i][j] == 1)
            cout<<ad[i][j]<<" ";
            else{ad[i][j]=0; cout<<0<<" ";}
        }
        cout<<"\n";
    }
}

void printList(vector<int>arr[],int  v)
{
    for(int i = 0 ;i<v;i++)
    {
        cout<<i<<"->";
        for(auto it:arr[i])
        cout<<it<<" ";
        cout<<"\n";
    }
}

void BFS(vector<int>arr[],int s , int visited[] )
{
    queue<int>q;
    q.push(s);
    visited[s] = 1;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto it:arr[x])
        {
            if(!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
}

void BFS_Dis(vector<int>arr[],int v)
{
    int visited[v] = {0};
    for(int i=0;i<v;i++)
    {   if(!visited[i])    
        BFS(arr,i,visited);
    }

}

void BFS2(int **arr,int s,int visited[],int v)
{
    visited[s] = 1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {   s = q.front();
        cout<<s<<" ";
        q.pop();
        for(int i=0;i<v;i++)
        {
            if(arr[s][i]==1)
            {
                if(!visited[arr[s][i]])
                {
                    visited[arr[s][i]] = 1;
                    q.push(arr[s][i]);
                }
            }
        }
    }
}

void BFS2_Dis(int **arr,int v)
{
    int visited[v] = {0};
    for(int i=0;i<v;i++)
    {   if(!visited[i])
        BFS2(arr,i,visited,v);
    }
}

int main()
{
    int v; 
    v = 6;

    int **ad;
    ad = new int*[v];
    for(int i = 0;i<v;i++)
        ad[i] = new int[v];

    ad[0][0] = {0};
    AddMat(ad,0,1);
    AddMat(ad,0,2);
    AddMat(ad,1,2);
    AddMat(ad,1,3);
    AddMat(ad,4,5);

    print(ad,v);

    // matrix to list
    vector<int>arr[v];
    for(int i=0;i<v;i++)
    {
        for(int j =0;j<v;j++)
        {
            if(ad[i][j] == 1)
            arr[i].push_back(j);
        }
    }

    printList(arr,v);

    BFS2_Dis(ad,v);
    cout<<"\n";
    BFS_Dis(arr,v);

return 0;
}
*/