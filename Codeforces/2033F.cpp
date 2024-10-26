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
int MOD = 1e9+7;
int LIMIT = (int)1e6;
vector<__int128_t>fibo(LIMIT, 1);

string decimal_string(__int128_t x) {
    string s = "";
    __int128_t temp = x;
    while (x) {
        __int32 a = x%10;
        s = s + (char)(a + '0');
        x = x / 10;
    }
    return s;
}



void solve(){
    int n, k;
    cin >> n >> k;
    __int128_t index;
    int flag = 1;
    int a = 1,b = 1, c = 2;
    while (a%k != 0) {
        flag++;
        c = (a + b)%k;
        a = b;
        b = c;
    }
    index = (n % MOD) * (flag % MOD);
    // debug(flag)
    cout << (int)(index % (int)(1e9+7)) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}