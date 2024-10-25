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

bool comp(pair<int, int>a, pair<int, int>b) {
    if(max(a.first, a.second) == max(b.first, b.second)) return min(a.first,a.second) <= min(b.first, b.second);
    return max(a.first, a.second) <= max(b.first, b.second);
}

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>>val(n);
    for (int i = 0; i < n; i++) {
        cin >> val[i].first >> val[i].second;
    }
    sort(all(val), comp);
    for (int i = 0; i < n; i++) {
        cout << val[i].first << " " << val[i].second << " ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}