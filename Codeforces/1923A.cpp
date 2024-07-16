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
    vector<int>a(n);
    int counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counter += a[i];
    }
    int l = n-1, r = 0;
    while (a[l] == 0){
        l--;
    }
    while (a[r] == 0){
        r++;
    }
    // cout << l << " " << r << " " << counter << endl;
    cout << l - r  - counter + 1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}