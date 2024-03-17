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
    int n;
    cin >> n;
    char a[n+1], b[n+1];
    cin >> a;
    cin >> b;
    for (int i = 0; i < n; i++){
        if(a[i] == 'G') a[i] = 'B';
        if(b[i] == 'G') b[i] = 'B';
    }
    int ans = true;
    for (int i = 0; i < n; i++){
        if(a[i] != b[i]) ans = false;
    }
    if(ans) YES; else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}