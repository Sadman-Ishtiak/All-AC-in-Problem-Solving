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
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int>ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++){
        if(a[i-1] > a[i]){
            ans.push_back(1);
            ans.push_back(a[i]);
        } else ans.push_back(a[i]);
    }
    cout << ans.size() << endl;
    for(auto i : ans) cout << i << " ";
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}