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
    int t;
    do{
        cin >> t;
        for (int i = 0; i < t; i++){
            int a,b,c,d,e;
            cin >> a >> b >> c >> d >> e;
            if(a<=127 && b>127 && c>127 && d>127 && e>127) cout << 'A' << endl;
            else if(a>127 && b<=127 && c>127 && d>127 && e>127) cout << 'B' << endl;
            else if(a>127 && b>127 && c<=127 && d>127 && e>127) cout << 'C' << endl;
            else if(a>127 && b>127 && c>127 && d<=127 && e>127) cout << 'D' << endl;
            else if(a>127 && b>127 && c>127 && d>127 && e<=127) cout << 'E' << endl;
            else cout << '*' << endl;
        }
        
    } while (t);
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}