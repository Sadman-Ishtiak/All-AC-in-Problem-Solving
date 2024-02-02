#include <bits/stdc++.h>
#define endl            '\n'
#define ld              long double
#define all(x)          x.begin(),x.end()
#define int             long long
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define sort(x)         sort(all(x))

using namespace std;

void solve(){
    int x,y,n;
    cin >> x >> y >> n;
    int a = (n/x)*x+y;
    if(a > n) a-= x;
    cout << a << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
