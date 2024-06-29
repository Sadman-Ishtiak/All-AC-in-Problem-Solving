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
    int a, b, c;
    cin >> a >> b >> c;
    if(c == 0) cout << "=";
    else if(c % 2 == 0){
        a = abs(a);
        b = abs(b);
        if(a == b) cout << "=";
        else if(a < b) cout << "<";
        else cout << ">";
    } else{
        if(a == b) cout << "=";
        else if(a < b) cout << "<";
        else cout << ">";
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}