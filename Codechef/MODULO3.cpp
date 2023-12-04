#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    int ans;
    if((a%3 == 0) || (b%3 == 0)) ans = 0;
    else if(a%3 == b%3) ans = 1;
    else ans = 2;
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}