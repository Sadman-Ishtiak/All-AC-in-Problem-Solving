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
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 1;
    set<int>flag;
    vector<int>output;
    flag.insert(a[0]);
    output.push_back(1);
    for (int i = 1; i < n; i++) {
        if(flag.find(a[i]) == flag.end()){
            ans++;
            flag.insert(a[i]);
            output.push_back(i+1);
        }
    }
    if(ans >= k) {
        YES;
        for (int i = 0; i < k; i++) {
            cout << output[i] << " ";
        }
    } else NO;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}