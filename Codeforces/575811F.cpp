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
    int a,b;
    cin >> a >> b;
    if(a < b) swap(a,b);
    int ans = 0;
    if(b*3 <= a) ans = b;
    else{
        // create a provisional team of a programmer and a mathematician
        int provisional = b;
        a -= b;
        // a-b peolpe left and they cannot fill provisional teams so they join as many as possible
        ans += a/2;
        // a/2 teams are permanent left provisional can create teams
        provisional -= a/2;
        ans += provisional/2;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}