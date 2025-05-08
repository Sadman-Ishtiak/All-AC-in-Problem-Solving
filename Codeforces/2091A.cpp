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
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int>ctr(10, 0);
    ctr[0] = 3;
    ctr[1] = 1;
    ctr[2] = 2;
    ctr[3] = 1;
    ctr[5] = 1;
    for (int i = 0; i < n; i++) {
        ctr[a[i]]--;
        bool ans = true;
        for (int j = 0; j < 10; j++) {
            if(ctr[j] > 0) ans = false;
        }
        if(ans) {
            cout << i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}