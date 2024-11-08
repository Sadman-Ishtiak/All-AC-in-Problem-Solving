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
    cin >> n;
    set<string>s;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        s.insert(x);
    }
    if((s.find("kjuklingur") != s.end()) && (s.find("nautakjot") != s.end())) cout << "blandad best\n";
    else if(s.find("kjuklingur") != s.end()) cout << "kjuklingur\n";
    else cout << "nautakjot\n";
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}