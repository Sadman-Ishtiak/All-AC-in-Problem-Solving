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

bool is_palindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}

void solve(){
    string s;
    cin >> s;
    string s1,s2;
    s1 = "a" + s;
    s2 = s + "a";
    if(!is_palindrome(s1)) {
        YES;
        cout << s1 << endl;
    } else if(!is_palindrome(s2)) {
        YES;
        cout << s2 << endl;
    } else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}