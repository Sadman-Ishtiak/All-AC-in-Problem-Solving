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
    vector<int>a(n);
    int out = 0;
    vector<int>ans(n-k+1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ans[0] = 0;
    for (int i = 0; i < k; i++){
        ans[0] += a[i];
    }
    for (int i = 1; i < n-k+1; i++){
        ans[i] = ans[i-1] - a[i-1]+ a[i+k-1];
        if(ans[i] < ans[out]) out = i;
    }
    cout << ++out;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}