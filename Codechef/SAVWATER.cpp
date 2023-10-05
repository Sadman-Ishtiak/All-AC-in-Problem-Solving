#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ld h,x,y,c;
    cin >> h >> x >> y >> c;
    ld total = h * (x + floor(y/2));
    if(total <= c) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}