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
    int n, m;
    cin >> n >> m;
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    std::unordered_set<int>nums;
    int ans[n];
    for (int i = n-1; i >= 0; i--){
        nums.insert(a[i]);
        ans[i] = nums.size();
    }
    
    // for (int i = 0; i < n; i++){
    //     cout << ans[i] << " ";
    // }
    for (int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        cout << ans[temp-1] << endl;
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}