#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int x,y,a,b,d;
    cin >> x >> y >> a >> b >> d;
    if (a*d > x || b*d > y) cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
