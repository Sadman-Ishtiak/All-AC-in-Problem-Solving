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
    int t;
    cin >> t;
    int x,n;
    queue<int>ans;
    for (int i = 0; i < t; i++) {
        cin >> x;
        if(x == 1) {
            cin >> n;
            ans.push(n);
        }
        if(x==2 && !ans.empty()) ans.pop();
        if(x==3) {
            if(ans.empty()) cout << "Empty!\n";
            else
                cout << ans.front() << endl;
        }
    }
}
int32_t main() {
    FastIO
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}