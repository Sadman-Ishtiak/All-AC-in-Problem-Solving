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

// Put your code here for good luck
void solve(){
    int n,k;
    cin >> n >> k;
    int odds = (n%2 == 0)?(n/2):(n/2+1);
    if(odds>=k && (odds-k)%2==0 && n>=2*k) YES;
    else NO;
}
// The main function resides here
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
