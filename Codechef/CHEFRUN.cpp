#include <bits/stdc++.h>
#define ll long long
#define ld double
using namespace std;


void solve(){
    ld x1,x2,x3,v1,v2;
    cin >> x1 >> x2 >> x3 >> v1 >> v2;
    if(abs(x1-x3)/v1 < abs(x2-x3)/v2) cout << "Chef" << endl;
    else if(abs(x1-x3)/v1 > abs(x2-x3)/v2) cout << "Kefa" << endl;
    else cout << "Draw" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}