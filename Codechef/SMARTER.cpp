#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ld l, a, b;
    cin >> l >> a >> b;
    ll here = ceil(l/b);
    ll tort = ceil(l/a);
    if(tort > here) cout << tort - here-1 << endl;
    else cout << -1 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}