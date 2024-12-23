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
    vector<int>a(n+1);
    int floor = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] == 1) floor++;
    }
    vector<int>ans;
    for (int i = 1; i <= n; i++) {
        if(a[i] == 1) ans.push_back(a[i-1]);
    }
    ans.push_back(a[n]);
    cout << floor << endl;
    for (int i = 1; i <= floor; i++) {
        cout << ans[i] << " ";
    }
    
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}