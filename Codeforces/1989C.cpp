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
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    int ra = 0, rb = 0, bm = 0, bp = 0;
    // For obvious ra and rb and to count bm and bp
    for (int i = 0; i < n; i++){
        if(a[i] == 1 && b[i] == 1) bp++;
        else if(a[i] == 1) ra++;
        else if(b[i] == 1) rb++;
        else if(a[i] == -1 && b[i] == -1) bm++;
        else ;
    }
    // Get rid of bm
    while (bm > 0){
        if(ra > rb) ra--;
        else rb--;
        bm--;
    }
    // add bp
    while (bp > 0){
        if(ra < rb) ra++;
        else rb++;
        bp--;
    }
    int ans = min(ra, rb);
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}