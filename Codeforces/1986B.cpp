#include <bits/stdc++.h>
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
    int r, c;
    cin >> r >> c;
    int a[r+2][c+2];
    for (int i = 0; i < r+2; i++){
        for (int j = 0; j < c+2; j++){
            a[i][j] = 0;
        }
        
    }
    
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            cin >> a[i][j];
        }
    }
    // stabilaze
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            int k = max({a[i+1][j], a[i-1][j], a[i][j+1], a[i][j-1]});
            // debug(k)
            if(a[i][j] > k)
                a[i][j] = k;
        }
    }
    
    
    // answer
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}