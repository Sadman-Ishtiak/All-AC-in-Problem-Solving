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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else zero++;
    }
    if(zero) cout << 0 << endl;
    else if(neg % 2 == 1) cout << 0 << endl;
    else {
        cout << 1 << endl;
        cout << "1 0\n";
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}