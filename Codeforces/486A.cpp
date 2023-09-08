#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll ans = (n+1)/2;
    if(n&1) ans = ans*(-1);
    cout << ans;
	return 0;
}
