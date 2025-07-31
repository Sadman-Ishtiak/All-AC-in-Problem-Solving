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
    vector<int> a(n);
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        dq.push_back(a[i]);
    }
    char s[n+1];
    s[n] = '\0';
    vector<int> ans(n, 0);
    int idx = 0;
    bool lastwasgreater = false;
    while(!dq.empty()) {
        int left = dq.front();
        int right = dq.back();

        if(idx&1) {
            ans[idx] = min(left, right);
            if(left < right) {
                s[idx] = 'L';
                dq.pop_front();
            } else {
                s[idx] = 'R';
                dq.pop_back();
            }
        }
        else {
            ans[idx] = max(left, right);
            if(left > right) {
                s[idx] = 'L';
                dq.pop_front();
            } else {
                s[idx] = 'R';
                dq.pop_back();
            }
        }
        idx++;
    }
    // for (int i = 0; i < n; i++) {
    //     cerr << ans[i] << " ";
    // }
    // cerr << endl;
    for (int i = 0; i < n; i++) {
        cout << s[i];
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}