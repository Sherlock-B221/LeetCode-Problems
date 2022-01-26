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
