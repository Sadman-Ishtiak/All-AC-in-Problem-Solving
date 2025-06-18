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
        // modification
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
    int count_connected_components() {
        int ans = 0;
        visited.assign(size, false);
        for (int i = 1; i < size; i++) {
            if(!visited[i]) {
                bfs(i);
                ans++;
            }
        }
        return ans;
    }
};

void solve(){
    int n;
    cin >> n;
    graph g(n);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if(x == i) continue;
        else {
            g.adj[i].push_back(x);
            g.adj[x].push_back(i);
        }
    }
    cout << g.count_connected_components() << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}