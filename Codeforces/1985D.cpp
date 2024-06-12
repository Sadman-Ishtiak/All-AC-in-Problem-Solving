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
    char s[n][m];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    int x = 0, y = 0;
    int maximum = 0;
    int mrow = 0;
    for (int i = 0; i < n; i++){
        int tempcounter = 0;
        for (int j = 0; j < m; j++){
            if (s[i][j] == '#')
                tempcounter++;
        }
        if (tempcounter > maximum){
            maximum = tempcounter;
            x = i;
        }
    }
    int counter = 0;
    for (int i = 0; i < m; i++){
        if(s[x][i] == '#'){
            counter++;
            y = i;
        }
    }
    y -= counter/2;
    cout << x+1 << " " << y+1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}