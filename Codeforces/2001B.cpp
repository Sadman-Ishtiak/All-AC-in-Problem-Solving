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
    vector<int>ans(n, -1);
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    if(n%2 == 0) {
        cout << -1 << endl;
        return;
    }
    if(n%2 ==1){
        for (int i = 0; i < (n>>1); i+=1) {
            ans[i] = n-i;
        }
        for (int i = (n>>1); i < n; i++) {
            ans[i] = i-(n>>1)+1;
        }
    }
    
    for (auto &&i : ans) {
        cout << i << " ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}