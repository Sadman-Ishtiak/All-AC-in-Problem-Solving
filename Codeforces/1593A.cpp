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
    vector<int>a(3);
    int m = INT64_MIN;
    for (int i = 0; i < 3; i++){
        cin >> a[i];
        m = max(m, a[i]);
    }
    int c = 0;
    for (int i = 0; i < 3; i++){
        if(a[i] == m) c++;
    }
    
    for (int i = 0; i < 3; i++){
        if(a[i] == m && c == 1) cout << 0 << " ";
        else if(a[i] == m) cout << 1 << " ";
        else cout << m-a[i]+1 << " ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}