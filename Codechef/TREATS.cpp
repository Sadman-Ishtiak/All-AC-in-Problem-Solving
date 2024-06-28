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
    int n,m;
    cin >> n >> m;
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int counter = 0;
    sort(a)
    sort(b)
    vector<int>a_mod_m(m+1, 0), b_mod_m(m+1, 0);
    for (int i = 0; i < n; i++){
        a_mod_m[a[i]%m]++;
        b_mod_m[b[i]%m]++;
    }
    counter += a_mod_m[0] * b_mod_m[0];
    for (int i = 1; i < m; i++){
        counter += a_mod_m[i] * b_mod_m[m-i];
    }
    cout << counter << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}