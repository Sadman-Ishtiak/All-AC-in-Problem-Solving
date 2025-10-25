#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
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
    vector<int>a(n+1, 0ll);
    // vector<int>prefix(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        // prefix[i+1] = prefix[i] + a[i];
    }
    int total = accumulate(all(a), 0LL);
    int sum1 = 0;
    for (int i = 1; i < n; i++) {
        sum1 += a[i];
        int sum2 = 0;
        for (int j = i+1; j < n; j++) {
            sum2 += a[j];
            int sum3 = total - sum1 - sum2;
            if((sum1%3) != (sum2%3) && (sum2%3) != (sum3%3) && (sum3%3) != (sum1%3)) {
                cout << i << " " << j << endl;
                return;
            }
            if((sum1%3) == (sum2%3) && (sum2%3) == (sum3%3) && (sum3%3) == (sum1%3)) {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
    
    cout << "0 0\n";
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}