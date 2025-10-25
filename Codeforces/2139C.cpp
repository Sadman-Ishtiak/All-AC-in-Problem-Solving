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
string decimalToBinary(int n) {
    if (n == 0) {
        return "0";
    }
    string binaryString = "";
    while (n > 0) {
        binaryString = (n % 2 == 0 ? "0" : "1") + binaryString;
        n /= 2;
    }
    return binaryString;
}

void solve(){
    int k, x;
    cin >> k >> x;
    int a = 1<<k;
    int ans_size = k;
    while (x%2 == 0 && x > 0) {
        x /= 2;
        k--;
    }
    cout << k << endl;
    vector<int> ans(k+1, 1);
    int flag = 0;
    while (x) {
        if(x & 1LL) {
            ans[flag] = 2;
        } else {
            ans[flag] = 1;
        }
        x >>= 1;
        flag++;
    }
    // ans[flag] = 1;
    // reverse(all(ans));
    for (int i = 1; i <= k; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}