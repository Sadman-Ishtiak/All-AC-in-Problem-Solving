#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int ap,bp,cp,p,a,b,c;
    cin >> ap >> bp >> cp >> p >> a >> b >> c;
    if(a >= ap && b >= bp && c >= cp && (a+b+c) >= p) cout << "YES" << endl;
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