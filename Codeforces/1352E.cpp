#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), ct(n+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ct[a[i]]++;
    }
    set<int>st;
    for (int i = 0; i < n; i++) {
        int t = a[i];
        for (int j = i+1; j < n; j++) {
            t += a[j];
            if(t > n) break;
            st.insert(t);
        }
    }
    int ans = 0;
    for (auto i : st) {
        ans += ct[i];
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}