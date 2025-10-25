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

void solve(){
    int w, h;
    cin >> w >> h;
    // char flag[h][w];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // flag[i][j] = '*';
            char c = '*';
            if(i >= (h/3) && i <= (2*h/3-1)) {
                c = '0';
                if(j >= (3*w/5))
                    c = '*';
                if(j < (2*w/5))
                    c = '*';
            }
            cout << c << " ";
        }
        cout << endl;
    }
    // for (int i = h/3; i < 2*h/3; i++) {
    //     for (int j = 2*w/5; j < 3*w/5; j++) {
    //         flag[i][j] = '0';
    //     }
    // }
    // for (int i = 0; i < h; i++) {
    //     for (int j = 0; j < w; j++) {
    //         cout << flag[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    
}
int32_t main() {
    // FastIO
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}