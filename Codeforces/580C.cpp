#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define     pb              push_back
using namespace std;

int n,m, ans = 0;
vector<vector<int>>adjlist;

void dfs(int curr, vector<int>&visited, int ccc, vector<int>&a) {
    visited[curr] = 1;
    if(ccc > m) return;
    bool isleaf = true;
    for (auto &&i : adjlist[curr]) {
        if(!visited[i]) {
            isleaf = false;
            dfs(i, visited, ccc*a[i]+a[i], a);
        }
    }
    if(isleaf && curr != 1) ans++;
}

void solve(){
    cin >> n >> m;
    adjlist.assign(n+1, vector<int>());
    vector<int>visited(n+1, 0);
    visited[0] = 1;
    vector<int>a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int f,t;
    for (int i = 1; i < n; i++) {
        cin >> f >> t;
        adjlist[f].push_back(t);
        adjlist[t].push_back(f);
    }
    dfs(1, visited, a[1], a);
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}