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
    int x;
    while (cin >> x) {
        int arr[x][x];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                arr[i][j] = 3;
            }
        }
        for (int i = 0; i < x; i++) {
            arr[i][i] = 1;
            arr[i][x-i-1] = 2;
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < x; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}