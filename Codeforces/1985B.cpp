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
    int n;
    cin >> n;
    int ans, maximum = 0;
    for (int i = 2; i <= n; i++){
        int tempans = 0, iter = 1;
        while (i*iter <= n)
        {
            tempans += i*iter;
            iter++;
        }
        if (tempans > maximum){
            maximum = tempans;
            ans = i;
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