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
    int a,b,c;
    cin >> a >> b >> c;
    int l1 ,l2;
    l1 = abs(a-1);
    l2 = abs(b-c);
    l2 += abs(c-1);
    if(l1 < l2) cout << 1 << endl;
    else if(l2 < l1) cout << 2 << endl;
    else cout << 3 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}