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
    int n, c;
    cin >> n >> c;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++) mp[s[i]] = 0;
    for (int i = 0; i < n; i++) mp[s[i]]++;
    vector<int>a;
    for (auto &&i : mp) a.push_back(i.second);
    sort(a)

    int curr_cost = 0;
    int ans = 0;
    for (auto &&i : a) {
        int people = i + curr_cost;
        int cost = (people * (people + 1)) / 2 - (curr_cost * (curr_cost + 1)) / 2;
        if(cost < c) {
            ans += cost;
            curr_cost = people;
        } else {
            ans += c;
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