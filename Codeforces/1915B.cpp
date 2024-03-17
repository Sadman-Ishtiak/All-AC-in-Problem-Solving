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
    string s[3];
    int k;
    char ans;
    for (int i = 0; i < 3; i++){
        cin >> s[i];
        for (int j = 0; j < 3; j++){
            if(s[i][j] == '?') k = i;
        }
    }
    sort(s[k])
    if(s[k][1] != 'A') ans = 'A';
    else if(s[k][2] != 'C') ans = 'C';
    else ans = 'B';
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}