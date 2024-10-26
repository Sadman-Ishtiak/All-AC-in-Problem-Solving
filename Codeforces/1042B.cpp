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
    vector<int>price(n);
    vector<string>vitamins(n);
    int ans = INT64_MAX;
    int a = -1, b = -1, c = -1;
    map<char, vector<int>>vitindex;
    for (int i = 0; i < n; i++) {
        cin >> price[i] >> vitamins[i];
        for (auto &&x : vitamins[i]) {
            vitindex[x].push_back(i);
        }
    }
    for (auto &&i : vitindex['A']) {
        for (auto &&j : vitindex['B']) {
            for (auto &&k : vitindex['C']) {
                if(i == j && j == k) ans = min(ans, price[i]);
                else if(i == j) ans = min(ans, price[i] + price[k]);
                else if(j == k) ans = min(ans, price[i] + price[k]);
                else if(i == k) ans = min(ans, price[i] + price[j]);
                else ans = min(ans, price[i] + price[j] + price[k]); 
            }
        }
    }
    if(ans == INT64_MAX) ans = -1;
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}