/*
A graph is an abstract data type that meant to implement the graph concepts from Mathematics
A graph is a collection of nodes connected by edges

A connected graph T without any cycles is called a tree graph or free tree or simply a tree
This means in particular that there is a unique simple path P between any two nodes u and v in T

A graph is to be labeled if its edges are assigned data
A graph G is said to be wighted if each edge e in G is assigned a non negative numerical value called the weight or length of e

Distinct edges e and e` are called multiple edges if they connected the same end points 

Graph types
- Directed graph
- Undirected graph
*/

// types of directed graph 
// 1.cyclic -> when there is a cycle in the graph
// 2.acyclic-> when there is no cycle

// based on labelling the graph are of three type
// unlabelled graph
// vertex-labeled 
// edge-labeled

// weighted graph  and unweighted graph  ->when the edges also have values there are called weighted graph

// sparse graph and dense graph : it is based on the number of edges in the graph (dense graph has many edges)

// how to store data in a graph
//  two ways to do it  ->1. adjacency list ,2.adjacency matrix

// 1.Adj matrix-> easy to represent & handle  -> consumes a lot of space so not fit for sparse graph
// 2.Adj lisst -> not easy for beginner to handle(needs some practice with linked list) ->takes less space , fit for sparse graph

// Adj matrix is good for dense graph due to low space required as conpared to adj list due to pointed overheads


// use matrix to store graph

// O(N^2) - space comlexity
// N<=10^3

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// const int N=1e3;
// int graph[N][N];
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++)
//     {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph[v1][v2]=1;
//         graph[v2][v1]=1;
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<graph[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// } 



// use list to store graph

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// const int N=1e3;
// vector<int> graph[N];
void printvec(vector<int> v)
{
    // cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> graph[n+1];
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<":";
        printvec(graph[i]);
    }
    return 0;
}