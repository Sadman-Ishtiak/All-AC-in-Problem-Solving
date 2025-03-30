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

void test() {
    for (int i = 0; i < 1000; i++) {
        int x = i;
        int s = 0;
        while (x) {
            s += x%10;
            x /= 10;
        }
        cerr << i << " : " << s << "\n";
    }
    
}

void solve(){
    int x, y;
    cin >> x >> y;
    if(x+1 == y) Yes;
    else if((x-y+1)%9 == 0 && x > y) Yes;
    else No;
}
int32_t main() {
    int t = 1;
    cin >> t;
    // test();
    while(t--) solve();
    return 0;
}