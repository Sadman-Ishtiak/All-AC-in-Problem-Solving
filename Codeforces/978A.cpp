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
    vector<int>flag(2000, 0);
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int>ans;
    for (int i = n-1; i >= 0; i--){
        if(flag[a[i]] == 0){
            ans.push_back(a[i]);
        }
        flag[a[i]] = 1;
    }
    reverse(all(ans));
    cout << ans.size() << endl;
    for (auto &&i : ans)
    {
        cout << i << " ";
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}