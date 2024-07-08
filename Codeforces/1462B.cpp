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
    string s;
    cin >> s;
    if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0') YES;
    else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0') YES;
    else if(s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0') YES;
    else if(s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') YES;
    else if(s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}