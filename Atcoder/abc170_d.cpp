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
    int n;
    cin >> n;
    vector<int>arr(n);
    set<int>numset;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        numset.insert(arr[i]);
    }
    vector<int>moses(*numset.rbegin() + 1, 0);
    for (auto &&i : arr) {
        for (int j = i; j <= *numset.rbegin(); j += i) {
            moses[j] += 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (moses[arr[i]] == 1) {
            ans++;
        }
    }
    cout << ans;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}