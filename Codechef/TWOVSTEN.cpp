#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%10 == 0) cout << 0 << endl;
    else if(n%5 == 0) cout << 1 << endl;
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