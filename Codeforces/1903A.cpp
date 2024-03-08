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
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    bool ans = true;
    for (int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]) ans = false;
    }
    if(ans == false && k < 2) NO;
    else YES;
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}