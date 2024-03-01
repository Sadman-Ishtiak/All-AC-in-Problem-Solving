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
unordered_set<int>Trues;
void solve(){
    int n;
    cin >> n;
    if(Trues.find(n) != Trues.end()) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int32_t main() {
    FastIO
    for (int i = 0; i < 500; i++){
        for (int j = 0; j < 500; j++){
            if(2020*i+2021*j > 1e6) break;
            Trues.insert(2020*i+2021*j);
        }
    }
    // for(auto i : Trues) cout << i << " ";
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
