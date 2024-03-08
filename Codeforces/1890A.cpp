#include <bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "Yes" << '\n'
#define     NO              cout << "No" << '\n'
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
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a)
    if(n == 2) YES;
    else if(a[0] == a[n-1]) YES;
    else{
        int diffcounter = 1;
        for (int i = 1; i < n; i++){
            if(a[i] != a[i-1]) diffcounter++;
        }
        // debug(diffcounter)
        if(diffcounter > 2) NO;
        else{
            int x = 0, y = 0;
            for (int i = 0; i < n; i++){
                if(a[i] == a[0]) x++;
                if(a[i] == a[n-1]) y++;
            }
            if(abs(x-y) < 2) YES;
            else NO;
        }
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}