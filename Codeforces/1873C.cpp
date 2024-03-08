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

int val[10][10] = {1,1,1,1,1,1,1,1,1,1,
                   1,2,2,2,2,2,2,2,2,1,
                   1,2,3,3,3,3,3,3,2,1,
                   1,2,3,4,4,4,4,3,2,1,
                   1,2,3,4,5,5,4,3,2,1,
                   1,2,3,4,5,5,4,3,2,1,
                   1,2,3,4,4,4,4,3,2,1,
                   1,2,3,3,3,3,3,3,2,1,
                   1,2,2,2,2,2,2,2,2,1,
                   1,1,1,1,1,1,1,1,1,1
                   };
void solve(){
    int ans = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            char x; cin >> x;
            if(x == 'X'){
                ans += val[i][j];
            }
        }
    }
    
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}