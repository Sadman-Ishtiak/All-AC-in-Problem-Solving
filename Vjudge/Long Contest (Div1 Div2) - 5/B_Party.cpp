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
    vector<int>a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<vector<int>>a_inverse(n+1);
    for (int i = 1; i <= n; i++) {
        if(a[i] == -1) a[i] = 0;
        a_inverse[a[i]].push_back(i);
    }
    // for (int i = 0; i <= n; i++) {
    //     cout << i << " : ";
    //     for (auto &&j : a_inverse[i]) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    queue<int>q;
    for (auto &&i : a_inverse[0]) {
        q.push(i);
    }
    int layers = 0;
    while (!q.empty()) {
        vector<int>q_copy;
        while (!q.empty()) {
            q_copy.push_back(q.front());
            q.pop();
        }
        layers++;
        for (auto &&i : q_copy) {
            for (auto &&j : a_inverse[i]) {
                q.push(j);
            }
        }
    }
    cout << layers << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}