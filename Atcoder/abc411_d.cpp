#include<bits/stdc++.h>
#include<ext/rope>
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
using namespace __gnu_cxx;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<rope<char>> s(n + 1);
    for (int i = 0; i < q; i++) {
        int task, pc;
        cin >> task >> pc;
        if(task == 1) {
            s[pc] = s[0];
        }
        if(task == 2) {
            string str;
            cin >> str;
            s[pc] += str.c_str();
        }
        if(task == 3) {
            s[0] = s[pc];
        }
    }
    cout << s[0] << endl;
}
int32_t main() {
    FastIO
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}