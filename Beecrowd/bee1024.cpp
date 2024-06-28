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
    getline(cin, s);
    int l = s.length();
    for (int i = 0; i < l; i++){
        char c = s[i];
        if(isalpha(c)){
            c += 3;
            s[i] = c;
        }
    }
    // cout << l << " " << l/2 << endl;
    reverse(all(s));
    for (int i = l/2; i < l; i++){
        char c = s[i];
        c--;
        s[i] = c;
    }
    cout << s << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    getchar();
    while(t--) solve();
    return 0;
}