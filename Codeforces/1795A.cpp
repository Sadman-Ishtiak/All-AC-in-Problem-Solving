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
    int a, b;
    cin >> a >> b;
    string s1, s2;
    cin >> s1 >> s2;
    int counter = 0;
    reverse(all(s2));
    s1 = s1 + s2;
    int len = a + b;
    for (int i = 1; i < len; i++) {
        if(s1[i] == s1[i-1]) counter++;
    }
    if(counter < 2) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}