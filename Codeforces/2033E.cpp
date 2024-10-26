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
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<bool>visited(n+1, false);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] == i) visited[i] = true;
        else if(a[a[i]] == i){
            visited[i] = true;
            visited[a[i]] = true;
        }
        else if(!visited[i]){
            int nodes = 0;
            int moving = i;
            while (!visited[moving]) {
                nodes++;
                visited[moving] = true;
                moving = a[moving];
            }
            // cout << nodes << " ";
            ans += floor((nodes-1)/2.0);
        }
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}