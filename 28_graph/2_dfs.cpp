#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void dfs(int vertex,vector<vector<int>> graph,int vis[])
{
    vis[vertex]=1;
    cout<<vertex<<endl;
    
    for(auto a:graph[vertex])
    {
        if(vis[a])
        continue;
        dfs(a,graph,vis);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> graph(n+1);
    int vis[n+1]={0};
    for(int i=0;i<e;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }
    dfs(1,graph,vis);
    return 0;
}