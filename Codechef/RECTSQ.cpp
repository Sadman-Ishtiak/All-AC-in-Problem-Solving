#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ll a,b,area, ans;
    cin >> a >> b;
    area = a*b;
    for (int i = 1; i <= max(a,b); i++){
        if(a%i == 0 && b%i ==0) ans = (a/i)*(b/i);
    }
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