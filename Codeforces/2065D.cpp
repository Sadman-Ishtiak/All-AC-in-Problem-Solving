#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cerr << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;



void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>>arrays(n, vector<int>(m, 0));
    vector<int>individual_score(n, 0);
    vector<int>SUM(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arrays[i][j];
            individual_score[i] += ((m-i) * arrays[i][j]);
            SUM[i] += arrays[i][j];
        }
        debug(individual_score[i])
    }
    vector<pair<int,vector<int>>> to_sort_this_shit(n);
    for (int i = 0; i < n; i++) {
        to_sort_this_shit[i].first = SUM[i];
        to_sort_this_shit[i].second = arrays[i];
    }
    sort(all(to_sort_this_shit));
    reverse(all(to_sort_this_shit));
    int ans = 0;
    int temp = n * m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans += (temp * to_sort_this_shit[i].second[j]);
            temp--;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}