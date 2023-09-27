#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int a,b,c,x,y,z;
    cin >> a >> b >> c >> x >> y >> z;
    if(a+b+c > x+z+y) cout << 1 << endl;
    else cout << 2 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
