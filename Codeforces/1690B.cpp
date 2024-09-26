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
    int n, tdf = -1;
    cin >> n;
    vector<int>a(n), b(n), c(n);
    bool ans = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
        if(c[i] < 0) ans = false;
        if(b[i]) tdf = c[i];
    }
    for (int i = 0; i < n; i++) {
        if(b[i] && c[i] != tdf) ans = false;
        if(b[i] == 0 && tdf != -1 && c[i] > tdf) ans = false;
    }
    
    if(n==1 && a[0] >= b[0]) YES;
    else if (ans) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}