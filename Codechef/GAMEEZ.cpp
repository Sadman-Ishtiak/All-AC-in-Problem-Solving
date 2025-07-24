#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
// #define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

struct points {
    int a;
    int position;
    int sorted_position;
};

bool comp(points a, points b) {
    return a.a > b.a;
}

void solve(){
    int n;
    cin >> n;
    vector<points>values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i].a;
        values[i].position = i;
    }
    sort(all(values), comp);

    // for (int i = 0; i < n; i++) {
    //     cerr << values[i].a << " ";
    // }
    // cerr << endl;

    vector<int>prefix_sum(n+1, 0);
    for (int i = 0; i < n; i++) {
        prefix_sum[i+1] = prefix_sum[i] + values[i].a;
    }
     

    vector<int>dp(2*n+1, 0);
    for (int m = 0; m <= n; m++) {
        for (int m2 = 0; m2 <= m; m2++) {
            int k_coins = m + m2; 
            if (k_coins > 2 * n) {
                continue;
            }
            int bonus = 0;
            if (m2 > 0) {
                bonus = (m2 * ((m - m2) + (m - 1))) / 2;
            }
            int current_sum = prefix_sum[m] + bonus;
            dp[k_coins] = max(dp[k_coins], current_sum);
        }
    }
    for (int k = 1; k <= 2 * n; k++) {
        dp[k] = max(dp[k], dp[k-1]);
    }
    for (int k = 1; k <= 2 * n; k++) {
        cout << dp[k] << (k == 2 * n ? "" : " ");
    }
    cout << endl;
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}