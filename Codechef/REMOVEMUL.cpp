//Definations and libraries inclusion
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
// defined dunctions are here

// Put your code here for good luck
void solve(){
    int n,m;
    cin >> n >> m;
    int ans = n*(n+1)/2;
    int sum = 0;
    for (int i = 0; i < m; i++){
        int t; cin >> t;
        sum += t;
    }
    
    cout << ans-sum << endl;
}
// The main function resides here
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
// Delete the functions here if they are not needed
