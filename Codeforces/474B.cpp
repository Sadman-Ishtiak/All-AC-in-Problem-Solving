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
    cin >> n;
    vector<int>a(n);
    cin >> a[0];
    for (int i = 1; i < n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    vector<int>b(a[n-1] + 1);
    int x = 0;
    for (int i = 0; i < a[n-1]+1; i++){
        if(i > a[x]) x++;
        b[i] = x;
        // cout << x+1 << " " << a[x] << " " << i << endl;
    }
    
    // for(auto i : a) cout << i << " ";
    // cout << endl;
    cin >> m;
    for (int i = 0; i < m; i++){
        int ans;
        cin >> ans;
        cout << b[ans]+1 << endl;
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}