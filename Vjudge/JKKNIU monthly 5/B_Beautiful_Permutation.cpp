#include <bits/stdc++.h>
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
    int n, k;
    cin >> n >> k;
    if(n == k) cout << -1;
    else if(k == n-1) {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
    }
    else{
        vector<int>ans(n);
        for (int i = 0; i < n; i++){
            ans[i] = i+1;
        }
        for (int i = k+1; i < n; i++){
            swap(ans[i], ans[(i+1)%n]);
        }
        for (int i : ans) cout << i << " ";
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}