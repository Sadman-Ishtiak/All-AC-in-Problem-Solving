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
    string s;
    cin >> n >> s;
    int ans = 0;
    map<char, int>st1, counter;
    for(int i = 0; i < n; i++){
        counter[s[i]] = 0;
    }
    for (auto &&i : s) {
        counter[i]++;
    }
    for (auto &&i : s) {
        if( st1.find(i) == st1.end() ) st1[i] = 0;
        st1[i]++;
        counter[i]--;
        if(counter[i] == 0) counter.erase(i);
        ans = max(ans, (int)st1.size() + (int)counter.size());
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}