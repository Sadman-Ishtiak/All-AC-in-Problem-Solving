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
    set<int>ans;
    if(n%3 != 0) {
        ans.insert(1);
        ans.insert(2);
        ans.insert(n-3);
    } else {
        ans.insert(1);
        ans.insert(4);
        ans.insert(n-5);
    }
    int mi = n;
    for (auto &&i : ans) {
        mi = min(mi, i);
    }
    if(ans.size() == 3 && mi > 0 ) {
        YES;
        for (auto &&i : ans) {
            cout << i << " ";
        }
        cout << endl;
    } else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}