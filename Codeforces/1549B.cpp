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
    string a,b;
    cin >> a >> b;
    int ans = 0;
    int i = 0, j = 0;
    vector<bool>cantake(n, true);
    for (int i = 0; i < n; i++) {
        if(a[i] == '0' && b[i] == '1') {
            ans++;
            cantake[i] = false;
        }
    }
    for (int i = 0; i < n; i++) {
        if(a[i] == '1' && b[i] == '1') {
            if(i == 0) {
                if(a[i+1] == '1' && cantake[i+1]) {
                    ans++;
                    cantake[i+1] = false;
                }
            } else if(i == n-1) {
                if(a[i-1] == '1' && cantake[i-1]) {
                    ans++;
                    cantake[i-1] = false;
                }
            } else {
                if(a[i-1] == '1' && cantake[i-1]) {
                    ans++;
                    cantake[i-1] = false;
                }
                else if(a[i+1] == '1' && cantake[i+1]) {
                    ans++;
                    cantake[i+1] = false;
                }
            }
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