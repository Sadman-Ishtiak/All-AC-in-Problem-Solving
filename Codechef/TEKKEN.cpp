#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    bool flag = false;
    int r = min(b,c);
    b -= r;
    c -= r;
    r = min(a,b);
    a -= r;
    b -= r;
    r = min(a,c);
    a -= r;
    c -= r;
    if(a > 0) cout << "YES" << endl;
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