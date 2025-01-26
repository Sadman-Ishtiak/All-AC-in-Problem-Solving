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
    string s;
    cin >> s;
    int n = s.length(), best = 0, count = 1;
    vector<int>ans(n, -1);
    stack<int>st;
    for (int i = 0; i < n; i++) {
        if(s[i] == '(') {
            st.push(i);
        }
        else {
            if(!st.empty()) {
                ans[i] = st.top();
                ans[st.top()] = i;
                st.pop();
            }
            else {
                ans[i] = -1;
            }
        }
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        if(ans[i] == -1) {
            k = 0;
        }
        else {
            k++;
            if(k > best) {
                best = k;
                count = 0;
            }
            if(best == k) count++;
        }
    }
    
    cout << best << " " << count << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}