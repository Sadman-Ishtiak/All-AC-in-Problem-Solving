#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b,c,n;
    ll cost = 0;
    cin >> n >> a >> b >> c;
    cost += min({a,b,c}) * (n-1);
    cost += a+b+c - min({a,b,c}) - max({a,b,c});
    cout << cost << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}