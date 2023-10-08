#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll p,v,m;
    cin >> p >> m >> v;
    cout << (m-p+1)*v << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}