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

vector<int>calc;

void solve(){
    int n;
    cin >> n;
    int k = 0;
    do{
        k++;
    } while (calc[k] <= n);
    cout << k << endl;
}
int32_t main() {
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            int x = j;
            for (int k = 1; k < i; k++){
                x *= 10;
                x += j;
            }
            calc.push_back(x);
        }
    }
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}