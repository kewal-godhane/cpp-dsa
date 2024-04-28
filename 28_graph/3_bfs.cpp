#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bfs(int vertex,vector<int> graph[],int vis[])
{
    queue<int>q;
    q.push(vertex);
    vis[vertex]=1;
    while (!q.empty())
    {
        int curr=q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto a:graph[curr])
        {
            if(!vis[a]){
            q.push(a);
            vis[a]=1;
            }
        }
    }
    
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> graph[n+1];
    int vis[n+1]={0};
    for(int i=0;i<e;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }
    bfs(1,graph,vis);
    return 0;
}