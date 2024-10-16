#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
// #define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

bool compare(pair<string, int>a, pair<string, int>b) {
    return a.second < b.second;
}

void solve(){
    vector<pair<string, int>>names(47);
    for (int i = 0; i < 47; i++) {
        cin >> names[i].first >> names[i].second;
    }
    sort(names.begin(), names.end(), compare);
    vector<string>ans;
    for (int i = 0; i < 12; i++) {
        // cout << names[i].second << " " << names[i].first << endl;
        ans.push_back(names[i].first);
    }
    sort(all(ans));
    cout << "Hoto Vagar Dol:\n";
    for (auto &&i : ans) {
        cout << i << endl;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}