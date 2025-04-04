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
    int a = 0, b = 1, c;
    vector<int>fibo;
    while (a <= n) {
        fibo.push_back(a);
        c = a + b;
        a = b;
        b = c;
    }
    for (auto &&i : fibo) {
        for (auto &&j : fibo) {
            for (auto &&k : fibo) {
                if(i + j + k == n) {
                    cout << i << " " << j << " " << k << endl;
                    return;
                }
            }
        }
    }
    cout << "I'm too stupid to solve this problem" << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}