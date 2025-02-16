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
    int n, m;
    cin >> n >> m;
    vector<int>a(n);
    int b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> b;
    vector<int>modified(n, 0LL);
    modified[0] = min(a[0], b - a[0]);
    for (int i = 1; i < n; i++) {
        // cerr << a[i] << " " << b - a[i] << " " << modified[i-1] << endl;
        if(a[i] >= modified[i-1] && (b-a[i]) >= modified[i-1]) {
            modified[i] = min(a[i], b - a[i]);
        } else if(a[i] >= modified[i-1]) {
            modified[i] = a[i];
        } else if((b-a[i]) >= modified[i-1]) {
            modified[i] = b - a[i];
        } else {
            NO;
            return;
        }
    }
    YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}