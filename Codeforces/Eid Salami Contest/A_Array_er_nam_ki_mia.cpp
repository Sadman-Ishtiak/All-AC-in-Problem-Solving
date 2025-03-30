#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
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
    vector<int>a(n+1, 1LL);
    int confirmed = 0, curr = 1;
    for (int i = 1; i <= n; i++) {
        a[i] = a[i-1];
        char c;
        if(a[i] == n) continue;
        while (true) {
            cout << "? " << i << " " << a[i] << endl;
            cin >> c;
            if(a[i] == n) break;
            if(c == '=') break;
            else {
                a[i]++;
            }
        }
    }
    cout << "!";
    for (int i = 1; i <= n; i++) {
        cout << " " << a[i];
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}