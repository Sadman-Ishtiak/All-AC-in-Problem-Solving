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
    int n;
    cin >> n;
    int nums[n][n];
    for (int i = 0; i < n; i++){
        nums[i][0] = 1;
        nums[0][i] = 1;
    }
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            nums[i][j] = nums[i-1][j] + nums[i][j-1];
        }
    }
    cout << nums[n-1][n-1];
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}