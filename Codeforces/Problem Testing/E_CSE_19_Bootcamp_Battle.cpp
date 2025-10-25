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
    int n;
    cin >> n;
    int odds = 0, evens = 0;
    vector<pair<string, int>> student(n);
    for (int i = 0; i < n; i++) {
        cin >> student[i].first >> student[i].second;
        if(student[i].second % 2 == 0) evens += student[i].second;
        else odds += student[i].second;
    }
    vector<string> res;
    if(odds > evens) {
        for (int i = 0; i < n; i++) {
            if(student[i].second % 2 == 1) {
                // cout << student[i].first << endl;
                res.push_back(student[i].first);
            }
        }
    } else if(evens > odds) {
        for (int i = 0; i < n; i++) {
            if(student[i].second % 2 == 0) {
                // cout << student[i].first << endl;
                res.push_back(student[i].first);
            }
        }
    } else {
        cout << -1 << endl;
        return;
    }
    // sort(res);
    // reverse(all(res));
    for (auto name : res) {
        cout << name << endl;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}