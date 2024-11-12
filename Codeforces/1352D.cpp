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
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans[2], curr = 0, l = 0, r = n-1, player = 0;
    ans[0] = 0;
    ans[1] = 0;
    while (l <= r) {
        int total = 0;
        while (total <= curr && l <= r) {
            if(player % 2 == 0){
                total += a[l];
                l++;
            } else {
                total += a[r];
                r--;
            }
        }
        curr = total;
        ans[player%2] += total;
        player++;
    }
    cout << player << " " << ans[0] << " " << ans[1] << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}