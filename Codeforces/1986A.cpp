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
    int x[3];
    for (int i = 0; i < 3; i++){
        cin >> x[i];
    }
    int ans = 0;
    for (int i = 0; i < 20; i++){
        if( ( abs(ans - x[0]) + abs(ans - x[1]) + abs(ans - x[2]) ) > ( abs(i - x[0]) + abs(i - x[1]) + abs(i - x[2]) ) )
            ans = i;
    }
    cout << abs(ans - x[0]) + abs(ans - x[1]) + abs(ans - x[2]) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}