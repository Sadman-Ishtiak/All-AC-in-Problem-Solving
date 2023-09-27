#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b <= c) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
