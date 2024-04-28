// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    // it is same as undirected graph but this time it will have a recursion array for each itration 
  public:
    bool dfs(int node,vector<int> adj[] ,bool vis[], bool rec[])
    {
        vis[node]=true;
        rec[node]=true;
        for(auto child: adj[node])
        {
            if(!vis[child])
            {
                if(dfs(child, adj,vis,rec)) return true;
            }
            else if(rec[child])
            {
                return true;
            }
        }
        rec[node]=false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        bool vis[V]={0};
        bool rec[V]={0};
        for(int i=0;i<V;i++)
        {
            
            bool ans;
            ans=dfs(i,adj,vis,rec);  // node ,graph,visited_array, parant
            
            if(ans)
            {
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}










// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// bool dfs(int vertex,vector<int> graph[],int vis[])
// {
//     if(vis[vertex]==1)
//     {
//         return true;
//     }
//     vis[vertex]=1;
//     bool loop_exist=false;
//     for(auto child:graph[vertex])
//     {
//         loop_exist=dfs(child,graph,vis);
//         if(loop_exist)
//         {
//             return true;
//         }
//     }
//     vis[vertex]=0;
//     return false;

// }
// int main()
// {
//     int n,e;
//     cin>>n>>e;
//     vector<int> graph[n+1];
   
//     for(int i=0;i<e;i++)
//     {
//         int temp1,temp2;
//         cin>>temp1>>temp2;
//         graph[temp1].push_back(temp2);
//     }
//     int vis[n+1]={0};
//     bool cycle=false;
//     for(int i=1;i<=n;i++)
//     {
//         vis[i]=1;
//         for(auto child:graph[i])
//         {
//             cycle=dfs(child,graph,vis);
//             if(cycle)
//             {
//                 cout<<cycle;
//                 break;
//                 // return cycle;
//             }
//         }
//         if(cycle) break;
//         vis[i]=0;
//     }
//     if(!cycle)
//     cout<<cycle;
//     // return cycle;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;


 // } Driver Code Ends
/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
// bool isCyclic_util(vector<int> adj[], vector<bool> visited, int curr)
// {
//     if(visited[curr]==true)
//         return true;
    
//     visited[curr] = true;
//     bool FLAG = false;
//     for(int i=0;i<adj[curr].size();++i)
//     {
//         FLAG = isCyclic_util(adj, visited, adj[curr][i]);
//         if(FLAG==true)
//             return true;
//     }
//     return false;
// }

// bool isCyclic(int V, vector<int> adj[])
// {
//    vector<bool> visited(V,false);
//    bool FLAG = false;
//    for(int i=1;i<=V;++i)
//    {
//            visited[i] = true;
//            for(int j=0;j<adj[i].size();++j)
//            {
//                FLAG = isCyclic_util(adj,visited,adj[i][j]);
//                if(FLAG==true)
//                    return true;
//            }
//            visited[i] = false;
//    }
//    return false;
// }

// // { Driver Code Starts.

// int main() {
	
// 	// int t;
// 	// cin >> t;
	
// 	// while(t--){
	    
// 	    int v, e;
// 	    cin >> v >> e;
	    
// 	    vector<int> adj[v];
	    
// 	    for(int i =0;i<e;i++){
// 	        int x, y;
// 	        cin >> x >> y;
// 	        adj[x].push_back(y);
// 	    }
//         cout<<"r";
	    
// 	    cout << isCyclic(v, adj) << 1;
// 	    cout<<"t";
// 	// }
	
// 	return 0;
// }  // } Driver Code Ends


