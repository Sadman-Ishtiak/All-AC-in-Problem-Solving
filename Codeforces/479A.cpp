#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    
}
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    ll ans = 0;
    ans = max({a+b+c, a*(b+c), (a+b)*c, a*b*c});
    cout << ans;
	return 0;
}