#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,x,y;
        cin >> n >> x >> y;
        ll lcm = x*y/__gcd(x,y);
        ll a = n/x - n/lcm, b = n/y - n/lcm;
        ll ans = n*(n+1)/2;
        a = n-a;
        ans -= a*(a+1)/2;
        ans -= b*(b+1)/2;
        cout << ans << endl;
    }
	return 0;
}