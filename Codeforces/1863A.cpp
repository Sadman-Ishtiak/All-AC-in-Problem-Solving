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
    int n, online, query;
    cin >> n >> online >> query;
    string s;
    cin >> s;
    // cout << s << endl;
    int high = online, curr = online;
    int plus = 0, minus = 0;
    for (int i = 0; i < query; i++){
        if(s[i] == '+') plus++;
        else minus++;
    }
    if(plus+online < n){
        NO;
        return;
    }
    for (int i = 0; i < query; i++){
        if(s[i] == '+') curr++;
        else curr--;
        high = max(curr, high);
    }
    if(n-high > 0) cout << "MAYBE" << endl;
    else YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}