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
    if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) cout << "Weak";
    else{
        int counter = 0;
        for (int i = 0; i < 3; i++){
            if((char) (s[i]+1) == s[i+1]) counter++;
            if(s[i] == '9' && s[i+1] == '0') counter++;
        }
        if(counter == 3) cout << "Weak";
        else cout << "Strong";
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}