#include <bits/stdc++.h>
// #define     int             long long
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
vector<int>dp;



void solve(){
    int n;
    cin >> n;
    for(auto i : dp){
        if(n%i == 0){
            cout << n/i << endl;
            break;
        }
    }
}
int32_t main() {
    for (int i = 2; i < 32; i++){
        dp.push_back((1<<i) - 1);
    }
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}