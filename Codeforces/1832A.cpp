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
    set<char>x;
    for (auto &&i : s) {
        x.insert(i);
    }
    if(x.size() >= 3) YES;
    else if(x.size() == 2 && s.size() > 3){
        int a = 0, b = 0;
        for (auto &&i : s) {
            if(i == s[0]) a++;
            else b++;
        }
        if((a-1) * (b-1)) YES;
        else NO;
    }
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}