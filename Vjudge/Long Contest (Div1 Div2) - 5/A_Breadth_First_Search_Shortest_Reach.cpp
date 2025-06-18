#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
struct graph {
// One Indexed graph structure
// Functionalities to be added later to convert this into a personal template within the topic contest
    int size;
    vector<vector<int>>adj;
    vector<bool>visited;
    vector<int>dist;
    queue<int>q;
    graph(int n){
        size = n+1;
        adj.assign(size, vector<int>());
        visited.assign(size, false);
        dist.assign(size, INT32_MAX);
    }
    void bfs(int start) {
        q.push(start);
        visited[start] = true;
        // mod
        // dist[start] = 0;
        while (!q.empty()) {
            int f = q.front();
            q.pop();
            
            for (auto &&i : adj[f]) {
                if(!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                    // dist[i] = dist[f] + 6;
                }
            }
        }
    }
};


void solve(){
    int node, edge;
    cin >> node >> edge;
    graph g(node);
    for (int i = 0; i < edge; i++) {
        int from, to;
        cin >> from >> to;
        g.adj[from].push_back(to);
        g.adj[to].push_back(from);
    }
    int start;
    cin >> start;
    g.bfs(start);
    for (int i = 1; i < g.size; i++) {
        if(i == start) continue;
        if(g.visited[i]) cout << g.dist[i] << " ";
        else cout << "-1 ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}