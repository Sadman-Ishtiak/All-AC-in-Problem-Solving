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
    int n, sum = 0;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {cin >> a[i]; sum += a[i];}
    int flag = 0;
    int same = sum/n;
    for (int i = 0; i < n; i++){
        if(a[i] > same) flag += (a[i] - same);
        if(a[i] < same) flag += (a[i] - same);
        // debug(flag);
        if(flag<0){
            NO; return;
        }
    }
    YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}