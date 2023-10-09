#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if(a*b >= 42) cout << e << endl;
    else if(a*b >= 21) cout << d << endl;
    else if(a*b >= 10) cout << c << endl;
    else cout << 0 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}