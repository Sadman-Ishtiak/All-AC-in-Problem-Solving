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
    int n,a,b;
    cin >> n >> a >> b;
    vector<char>ans;
    for (int i = 0; i < n/b+2; i++){
        for (char i = 'a'; i < 'a'+b; i++){
            ans.push_back(i);
        }
    }
    for (int i = 0; i < n; i++){
        cout << ans[i];
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}