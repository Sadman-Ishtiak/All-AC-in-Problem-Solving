#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(b,a-b)*c << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}