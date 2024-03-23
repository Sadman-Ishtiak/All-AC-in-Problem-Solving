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
    int n,m;
    cin >> n >> m;
    int find = 0;
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    string vika = "vika";
    for (int i = 0; i < m; i++){
        bool x = false;
        for (int j = 0; j < n; j++){
            if(s[j][i] == vika[find]) x = true;
        }
        if(x){
            ++find;
            if(find == 4) break;
        }
    }
    if(find == 4) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}