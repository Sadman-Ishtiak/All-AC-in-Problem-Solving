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
    int n,m;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int>b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    int ans = 0;
    sort(a)
    sort(b)
    int i = 0, j = 0;
    while (i < n && j < m){
        if(abs(a[i]-b[j]) <= 1) {
            ++ans; 
            ++i; 
            ++j;
        } else{
            if(a[i] < b[j]) ++i;
            else ++j;
        }
    }
    cout << ans;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}