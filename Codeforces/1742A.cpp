#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;


void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(max({a,b,c}) == a+b+c-max({a,b,c})) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}