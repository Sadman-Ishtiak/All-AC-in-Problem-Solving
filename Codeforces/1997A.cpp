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
    int n = s.length();
    if(n == 1){
        if(s == "a") cout << "ak" << endl;
        else cout << s << 'a' << endl;
    } else {
        int flag = -1;
        for (int i = 0; i < n-1; i++) {
            if(s[i] == s[i+1]) {flag = i; break;}
        }
        if(flag == -1){
            if(s[0] == 'a') cout << 'b' << s << endl;
            else cout << 'a' << s << endl;
        } else {
            for (int i = 0; i < n; i++){
                cout << s[i];
                if(i == flag) {
                    if(s[i] == 'a') cout << 'b';
                    else cout << 'a';
                }
            }
            cout << endl;
        }
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}