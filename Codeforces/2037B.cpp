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
    vector<int>a(n);
    multiset<int>ss;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if((n-2)%a[i] == 0) ss.insert(a[i]);
    }
    n -= 2;
    for (auto &&i : ss) {
        if(n/i == i) {
            if(ss.count(i) >= 2) {
                cout << i << " " << i << endl;
                return;
            }
        }
        else {
            if(ss.count(n/i) >= 1) {
                cout << i << " " << n/i << endl;
                return;
            }
        }
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}