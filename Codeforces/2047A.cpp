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

vector<int>layers(100, 0);


void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    int sum = 0;
    int curr = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if(find(layers.begin(), layers.end(), sum) != layers.end()) ans++;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    layers[0] = 1;
    for (int i = 1; i < 100; i++) {
        layers[i] = (2*i-1)*4 + 4;
        layers[i] = layers[i] + layers[i-1];
        // debug(layers[i])
    }
    
    while(t--) solve();
    return 0;
}