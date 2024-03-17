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
    char kb[27];
    string s;
    cin >> kb >> s;
    map<char, int> a;
    for (int i = 0; i < 26; i++){
        a[kb[i]] = i+1;
    }
    int ans = 0;
    int n = s.size();
    for (int i = 1; i < n; i++){
        ans += abs(a[s[i]] - a[s[i-1]]); 
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}