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
    vector<int>a(n, 0);
    int l,r,c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    l = a[0] - 1;
    r = a[0] + 1;
    for (int i = 1; i < n; i++) {
        if(a[i] == l) l = l - 1;
        else if(a[i] == r) r = r + 1;
        else {
            NO; return;
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