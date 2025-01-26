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
    vector<int>a(n+1, INT64_MIN);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<int>ans(n+1);
    stack<int>st;
    for (int i = 1; i <= n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        if(!st.empty()) {
            ans[i] = st.top();
        }
        st.push(i);
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i+1] << " ";
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}