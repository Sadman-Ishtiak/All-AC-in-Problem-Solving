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
    int n;
    string s,t;
    cin >> n >> s;
    t = s;
    reverse(all(t));
    if(s.compare(t) == 0){
        cout << s << endl;
    } else if(s.compare(t) < 0){
        if(n%2 == 0){
            cout << s << endl;
        } else {
            if(n == 1) cout << t << endl;
            else cout << s << t << endl;
        }
    } else{
        if(n%2 == 0){
            if(n >= 2) cout << t << s << endl;
            else cout << t << endl;
        } else {
            cout << t << endl;
        }
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}