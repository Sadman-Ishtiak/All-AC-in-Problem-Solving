#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "Yes" << '\n'
#define     NO              cout << "No" << '\n'
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
    int l = s.length();
    bool a = false, b = false;
    for (int i = 0; i < l; i++){
        if(s[i] == 'C') a = true;
        if(s[i] == 'F' && a) b = true;
    }
    if(a & b) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}