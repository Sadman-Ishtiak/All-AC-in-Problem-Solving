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
    vector<int>a(n,0);
    int haha = sqrt(2*n);
    int mmn = n;
    for (int x = n-1; x>=0;) {
        int i = sqrt(2*x);
        int num = i*i-x;
        while (num < n && x >= 0) {
            // debug(num)
            // debug(x)
            a[x] = num;
            num++;
            x--;
        }
        n = i*i-(n-1);
    }
    for (int i = 0; i < mmn; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}