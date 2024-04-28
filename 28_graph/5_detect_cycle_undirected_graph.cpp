// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    bool dfs(int node,vector<int> adj[] ,bool vis[], int parant)
    {
        vis[node]=true;
        
        for(auto child: adj[node])
        {
            if(!vis[child])
            {
                if(dfs(child, adj,vis,node))
                {
                    return true;
                }
            }
            else if(parant!=child)
            {
                return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        // Code here
        bool vis[V]={0};
        for(int i=0;i<V;i++)
        {
            
            bool ans;
            if(!vis[i]){
            ans=dfs(i,adj,vis,-1);  // node ,graph,visited_array, parant
            
            if(ans)
            {
                return true;
            }
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends



