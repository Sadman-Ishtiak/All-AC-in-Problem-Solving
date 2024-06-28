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
    int t;
    cin >> t;
    while (t){
        int x,y;
        cin >> x >> y;
        // cout << x << '\t' << y << endl;
        for (int i = 0; i < t; i++){
            int a, b;
            cin >> a >> b;
            a -= x;
            b -= y;
            // cout << a << "\t" << b << "\t";
            if(a == 0 || b == 0) cout << "divisa" << endl;
            else if(a > 0 && b > 0) cout << "NE" << endl;
            else if(a > 0 && b < 0) cout << "SE" << endl;
            else if(a < 0 && b > 0) cout << "NO" << endl;
            else cout << "SO" << endl;
        }
        
        cin >> t;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}