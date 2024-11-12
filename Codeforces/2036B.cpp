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
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>>bottles(k);
    map<int, int> costcounter;
    for (int i = 0; i < k; i++) {
        cin >> bottles[i].first >> bottles[i].second;
        costcounter[bottles[i].first] = 0;
    }
    for (int i = 0; i < k; i++) {
        costcounter[bottles[i].first] += bottles[i].second;
    }
    vector<int>prices;
    for (auto &&i : costcounter) {
        prices.push_back(i.second);
    }
    sort(prices)
    reverse(all(prices));
    int counter = 1, ans = 0;
    for (auto &&i : prices) {
        ans += i;
        counter++;
        if(counter > n) break;
    }
    
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}