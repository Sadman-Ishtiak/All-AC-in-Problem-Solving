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

void solve(){
    int n, q;
    cin >> n >> q;
    vector<bool>is_white(n+2, true);
    int black_segments = 0;
    for (int i = 0; i < q; i++) {
        int curr;
        cin >> curr;
        if(is_white[curr-1] == true && is_white[curr+1] == true) {
            if(is_white[curr])
                black_segments++;
            else black_segments--;
        }
        if(is_white[curr-1] == false && is_white[curr+1] == false) {
            if(!is_white[curr])
                black_segments++;
            else black_segments--;
        }

        is_white[curr] = (!is_white[curr]);
        cout << black_segments << endl;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}