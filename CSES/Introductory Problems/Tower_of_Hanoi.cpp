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

vector<pair<int, int>>ans;

void toh(int layers, int from, int helper, int to){
    if(layers == 0) return;
    toh(layers - 1, from, to, helper);
    ans.push_back(make_pair(from, to));
    toh(layers - 1, helper, from, to);
}

void solve(){
    int n;
    cin >> n;
    ans.clear();
    toh(n, 1, 2, 3);
    cout << ans.size() << endl;
    for (auto &&i : ans){
        cout << i.first << " " << i.second << endl;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}