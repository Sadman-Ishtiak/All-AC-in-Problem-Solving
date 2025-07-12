#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ld> a(n+1);
    ld x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        a[n] -= a[i];
    }
    if(a[n] <= 0) Yes;
    else No;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}