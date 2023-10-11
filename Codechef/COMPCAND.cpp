#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    if(a%b == 0) cout << a/b << endl;
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