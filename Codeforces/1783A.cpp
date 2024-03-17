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
    int n, sum = 0;
    bool ans = true;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    // Processing the data
    sort(a)
    reverse(a.begin()+1, a.end());
    sum = a[0];
    for (int i = 1; i < n; i++){
        if(sum == a[i]) ans = false;
        sum += a[i];
    }
    
    // Printing the answers
    if(ans){
        YES;
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    } else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}