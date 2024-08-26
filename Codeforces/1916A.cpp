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
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    int prod = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prod *= a[i];
    }
    if(prod > 2023 || prod == 0){
        NO;
    } else if (2023 % prod != 0) {
        NO;
    }
    else {
        YES;
        cout << (int)(2023/prod);
        for (int i = 0; i < k-1; i++) {
            cout << " 1";
        }
        cout << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}