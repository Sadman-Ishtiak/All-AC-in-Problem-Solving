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
    string s;
    cin >> s;
    int n = s.length();
    ld ans = 0.0;
    for (int i = 0; i < n; i++) {
        if(s[i] == 't') {
            for (int j = i+2; j < n; j++) {
                if(s[j] == 't') {
                    int len = j - i + 1;
                    int counter = 0;
                    for (int x = i; x <= j; x++) if(s[x] == 't') counter++;
                    if(counter >= 3) {
                        ld temp = counter - 2;
                        temp /= (len - 2);
                        ans = max(ans, temp);
                    }
                }
            }
        }
    }
    cout << fixed << setprecision(17) << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}