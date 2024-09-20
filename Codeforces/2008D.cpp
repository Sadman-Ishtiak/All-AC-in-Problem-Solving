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
    vector<int>a(n+1, 0);
    string s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> s;
    s = "s" + s;
    // cout << s << endl;
    vector<int>ans(n+1, 0);
    vector<bool>in_a_chain(n+1, false);
    // brain part
    for (int i = 1; i <= n; i++) {
        if(!in_a_chain[i]){
            vector<int>cycles;
            int curr = i;
            while (!in_a_chain[curr]) {
                in_a_chain[curr] = true;
                cycles.push_back(curr);
                curr = a[curr];
            }
            int counter = 0;
            for(auto k : cycles){
                if(s[k] == '0') counter++;
            }
            for(auto k : cycles) ans[k] = counter;
            // cout << endl;
        }
    }
    
    // Output
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}