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
    int a,b;
    cin >> a >> b;
    int x = 0, y = 0, z = 0;
    for (int i = 1; i < 7; i++) {
        if(abs(i-a) < abs(i-b)) x++;
        else if(abs(i-a) > abs(i-b)) z++;
        else y++;
    }
    cout << x << " " << y << " " << z << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}