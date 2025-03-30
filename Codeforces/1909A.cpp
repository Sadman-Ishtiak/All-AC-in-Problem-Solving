#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
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
    vector<pair<int,int>>cd(n);
    for (int i = 0; i < n; i++) {
        cin >> cd[i].first >> cd[i].second;
    }
    int u = 0, d = 0, l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if(cd[i].first > 0) r++;
        if(cd[i].first < 0) l++;
        if(cd[i].second > 0) u++;
        if(cd[i].second < 0) d++;
    }
    if(u*d*l*r) NO;
    else YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}