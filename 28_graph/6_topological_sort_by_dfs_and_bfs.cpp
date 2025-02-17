//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void dfs(int node, vector<int> adj[],bool vis[], stack<int> &st)
	{
	    vis[node]=true;
	    for(auto child:adj[node])
	    {
	        if(!vis[child])
	        {
	            dfs(child,adj,vis,st);
	        }
	    }
	    st.push(node);
	}
	void bfs(int V,vector<int> adj[],int indeg[] ,vector<int> &ans)
	{
	    queue<int> q;
	    for(int i=0;i<V;i++)
	    {
	       if(indeg[i]==0)
	       {
	           q.push(i);
	       }
	    }

	    while(!q.empty())
	    {
	        int curr=q.front();
	        ans.push_back(curr);
	        q.pop();
	        
	        for(auto a: adj[curr])
	        {
	            indeg[a]--;
	            if(indeg[a]==0)
	            {
	                q.push(a);
	            }
	        }
	    }
	    
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   // code here using dfs (we have used stack , after performing dfs when we reach end we put that number in stack(least dependent element in the graph) when the stack in completed the top element is the most dependent element)
	   // bool vis[V]={0};
	   // stack<int> st;
	   // for(int i=0;i<V;i++)
	   // {
	   //     if(!vis[i])
	   //     {
	   //         dfs(i,adj,vis,st);
	   //     }
	   // }
	   // vector<int> vt;
	   // while(!st.empty())
	   // {
	   //     vt.push_back(st.top());
	   //     st.pop();
	   // }
	   // return vt;
	   
	   
	   //code here using bfs (kahn's algo)
	   //first we have to calculate in degree -> no. of edges comming into the node
	   // the element which has 0 in degree pushed into queue and into ans vector , and all the connected node's indeg will get reduce by one , and if the indeg become 0 it will be pushed into queue 
	   int indeg[V]={0};
	   for(int i=0;i<V;i++)
	   {
	       for(auto a:adj[i])
	       {
	           indeg[a]++;
	       }
	   }

	   vector<int > ans;
	   bfs(V,adj,indeg,ans);
	   return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends