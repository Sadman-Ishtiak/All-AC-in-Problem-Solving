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
    string s;
    cin >> s;
    int n = s.length();
    if(s.find("bab") != string::npos || s.find("aba") != string::npos || n < 2) NO;
    else if(s[0] == 'a' && s[1] == 'b') NO;
    else if(s[0] == 'b' && s[1] == 'a') NO;
    else if(s[n-1] == 'a' && s[n-2] == 'b') NO;
    else if(s[n-1] == 'b' && s[n-2] == 'a') NO;
    else YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}