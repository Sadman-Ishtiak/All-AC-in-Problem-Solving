#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << max(b, a+c) << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}