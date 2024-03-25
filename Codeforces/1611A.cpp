#include <bits/stdc++.h>
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
    if((s[n-1]-'0')%2 == 0){
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++){
        if(s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8'){
            if((s[0]-'0')%2 == 0) cout << 1 << endl;
            else cout << 2 << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}