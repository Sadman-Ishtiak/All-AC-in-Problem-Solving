#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b+c == 1 || a+b+c == 2) cout << 1 << endl;
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