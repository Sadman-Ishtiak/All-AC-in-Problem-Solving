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
    int l, r, k;
    cin >> l >> r >> k;
    int nums = (r - l + 1);
    if(nums == 1) {
        if(l == 1) NO;
        else YES;
    }
    else {
        int odds = nums/2;
        if(l%2 == 1 && r%2 == 1) odds++;
        if(odds <= k) YES;
        else NO;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}