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
    int m = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        m = max(m, a[i]);
    }
    set<int>factors_of_sum;
    int sq = sqrt(sum);
    for (int i = 1; i <= sq; i++) {
        if(sum%i == 0) {
            factors_of_sum.insert(i);
            factors_of_sum.insert(sum/i);
        }
    }
    
    for (int i : factors_of_sum) {
        // cout << i << " ";
        bool ans = true;
        int curr = 0;
        for (int j = 0; j < n; j++) {
            curr+= a[j];
            if(curr == i) curr = 0;
            if(curr > i) {
                ans = false;
                break;
            }
        }
        if(ans && curr == 0) cout << i << " ";
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}