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
    int n, m;
    cin >> n >> m;
    bool ans = true, ans2 = true;
    string s[n], temp[n], temp2[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        temp[i] = s[i];
        temp2[i] = s[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c = ((((i+j)%2 == 0))? 'W':'R');
            if(s[i][j] == '.') temp[i][j] = c;
            else {
                // cout << i << " " << j << " " << c << endl;
                if(s[i][j] != c) {
                    ans = false;
                    break;
                } else s[i][j] = c;
            }
            if(!ans) break;
        }
        if(!ans) break;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c = (((i+j)%2 == 0)? 'R':'W');
            if(s[i][j] == '.') temp2[i][j] = c;
            else {
                if(s[i][j] == c) {
                    temp2[i][j] = c;
                } else {
                    ans2 = false;
                    break;
                }
            }
            if(!ans2) break;
        }
        if(!ans2) break;
    }
    if(ans) {
        YES;
        for (int i = 0; i < n; i++) {
            cout << temp[i] << endl;
        }
    } else if(ans2) {
        YES;
        for (int i = 0; i < n; i++){
            cout << temp2[i] << endl;
        }        
    }
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}