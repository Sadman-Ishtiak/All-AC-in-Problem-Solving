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
    int att_a = 0, att_b = 0, def_a = 0, def_b = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        att_a += x;
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        def_a += x;
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        att_b += x;
    }
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        def_b += x;
    }
    if(att_a > att_b && def_a > def_b)
        cout << "A" << endl;
    else if(att_a < att_b && def_a < def_b)
        cout << "P" << endl;
    else cout << "DRAW" << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}