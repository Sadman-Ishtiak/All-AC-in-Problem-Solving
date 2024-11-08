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

vector<vector<string>>precalculated(95);

void precalc(){
    for (int i = 1; i <= 94; i++) {
        vector<string>st(i);
        for (int j = 0; j <= 94; j++) {
            char c = (char)(j + 33);
            st[j%i] = st[j%i] + c;
        }
        // cout << "\n\n" << i << "\n\n";
        // for (auto &&x : st) {
        //     cout << x << endl;
        // }
        precalculated[i] = st;
    }
}


void solve(){
    char a, b;
    cin >> a >> b;
    for (int i = 1; i <= 94; i++) {
        int x = precalculated[i].size();
        for (int j = 0; j < x; j++) {
            if(precalculated[i][j].find(a) != string::npos && precalculated[i][j].find(b) != string::npos){
                int col = 94/i;
                if(94%i) col++;
                cout << i << " " << col << endl;
                // cout << precalculated[i][j] << endl;
                // break;
            }
        }
    }
    cout << endl;
}
int32_t main() {
    precalc();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}