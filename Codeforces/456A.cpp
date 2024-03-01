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
    vector<pair<int, int>>a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a)

    for (int i = 0; i < n-1; i++) if(a[i].first < a[i+1].first && a[i].second > a[i+1].second){
        cout << "Happy Alex";
        return;
    }
    cout << "Poor Alex";
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}