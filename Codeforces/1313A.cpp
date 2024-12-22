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
    int a,b,c;
    cin >> a >> b >> c;
    vector<int>arr = {a,b,c};
    sort(arr)
    a = arr[2];
    b = arr[1];
    c = arr[0];
    int ans = 0;
    int flags[7][3] = {{0, 0, 1}, {0, 1, 0}, {1, 0, 0}, {1, 0, 1}, {1, 1, 0}, {0, 1, 1}, {1, 1, 1}};
    for (int i = 0; i < 7; i++) {
        if(a >= flags[i][0] && b >= flags[i][1] && c >= flags[i][2]) {
            ans++;
            a -= flags[i][0];
            b -= flags[i][1];
            c -= flags[i][2];
        }
    }
    
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}