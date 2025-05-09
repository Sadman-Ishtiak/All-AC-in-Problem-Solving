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
    int n;
    cin >> n;
    vector<int>evens, odds;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if(x%2 == 0) evens.push_back(i);
        else odds.push_back(i);
    }
    if(odds.size() >= 3) {
        YES;
        for (int i = 0; i < 3; i++) {
            cout << odds[i] << " ";
        }
        cout << endl;
    } else if(odds.size() == 2 && evens.size() > 1) {
        YES;
        cout << odds[0] << " " << evens[0] << " " << evens[1] << endl;
    } else if(odds.size() == 1){
        YES;
        cout << odds[0] << " " << evens[0] << " " << evens[1] << endl;
    } else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}