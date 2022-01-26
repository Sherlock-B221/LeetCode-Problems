// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
   
    void dfs ( int root, vector<int> &ans, vector<int> &vis, vector<int> g[] ) {
        vis[root] = 1;
        ans.push_back(root);
        
        
        for ( auto e : g[root] ) {
            if ( !vis[e])
                dfs( e, ans, vis, g);
        }
    }
    
    
    
    vector<int> dfsOfGraph(int n, vector<int> g[]) {
        
        vector<int> vis(n,0);
        vector<int> ans;
        dfs(0,ans,vis,g);
            
        return ans;
        
    }
};

// { Driver Code Starts.
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends