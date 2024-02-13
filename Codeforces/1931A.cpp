//Definations and libraries inclusion
#include <bits/stdc++.h>
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
    int n; cin >> n;
    int s[3] = {1,1,1};
    if(s[0] + s[1] + s[2] < n) s[2] = n-s[1]-s[0];
    if(s[2] > 26){
        s[2] = 26;
        s[1] = n-s[0]-s[2];
    }
    if(s[1] > 26){
        s[1] = 26;
        s[0] = n-s[1]-s[2];
    }
    for(int i = 0; i < 3; i++) printf("%c", s[i]+'a'-1); cout << endl;
}
// The main function resides here
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}