#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void dfs(unordered_map<string,vector<pair<string,double>>>graph,string src,string dest,unordered_set<string>&vis,double &res , double &ans,bool &flag)
{
    if(flag == false && src == dest)
    {
        ans = res;
        flag = true;
        cout<<res<<"\n";
        cout<<"\n";
        return;
    }
    for(auto it:graph[src])
    {
        if(vis.find(it.first) == vis.end() || (graph[src].size()==1 && vis.find(graph[src][0].first) != vis.end()))
        {
            cout<<src<<" to "<<it.first<<" ";
            vis.insert(it.first);
            res = res*it.second;
            cout<<res<<" ";
            dfs(graph,it.first,dest,vis,res,ans,flag);
        }
    }

}

vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
{

    unordered_map<string,vector<pair<string,double>>>graph;
    int i = 0;
    for(auto it:equations)
    {
        graph[it[0]].push_back({it[1],values[i]});
        graph[it[1]].push_back({it[0],1/values[i++]});
    }

    vector<double>fin;
    for(auto it:queries)
    {
        string src = it[0];
        string dest = it[1]; 
        if(graph.find(src) == graph.end() || graph.find(dest) == graph.end())
        {
            fin.push_back(double(-1)); continue;
        }
        double res = 1;
        double ans = -1;
        unordered_set<string>vis;
        vis.insert(src);
        bool flag = false;
        dfs(graph,src,dest,vis,res,ans,flag);
        cout<<"\nend\n";
        
        fin.push_back(ans);
    }
    for(auto it:fin)
        cout<<it<<" ";
    return fin;
}

int main()
{

    vector<vector<string>> equations = {{"x1","x2"},{"x2","x3"},{"x3","x4"},{"x4","x5"}};

    vector<double> values = {3.0,4.0,5.0,6.0};

    vector<vector<string>> queries = {{"x1","x5"},{"x5","x2"},{"x2","x4"},{"x2","x2"},{"x2","x9"},{"x9","x9"}};
    calcEquation(equations,values,queries);

    return 0;
}