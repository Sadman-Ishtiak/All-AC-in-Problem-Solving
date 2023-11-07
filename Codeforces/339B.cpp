#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;


void solve(){
    
}
int main() {
    ll a,b;
    cin >> a >> b;
    ll ans = 0,t=1,x;
    for (ll i = 0; i < b; i++){
        cin >> x;
        if(x > t) ans += x-t;
        else if(x < t) ans += (a-t)+x;
        else ;
        t = x;
    }
    cout << ans;
	return 0;
}