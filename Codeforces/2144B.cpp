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
    vector<int>a(n+10);
    vector<int>positions(n+10, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // st.insert(a[i]);
        positions[a[i]]++;
    }
    int flag = 1;
    for (int i = n - 1; i >= 0; i--) {
        if(a[i] == 0) {
            while (positions[flag] > 0 && flag < n) {
                flag++;
            }
            a[i] = flag;
            positions[flag]++;
        }
    }
    // for (auto &&i : a) {
    //     cerr << i << " ";
    // }
    // cerr << endl;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if(a[i] != i+1) {
            ans = i+1;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if(a[i] != i+1) {
            ans -= i;
            break;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}