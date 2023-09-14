#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int a,b;
    cin >> a >> b;
    int ans = (b/10)*3;
    if(b%10 >= 2) ans++;
    if(b%10 >= 3) ans++;
    if(b%10 >= 9) ans++;
    ans = ans - (a/10)*3;
    if(a%10 > 2) ans--;
    if(a%10 > 3) ans--;
    if(a%10 > 9) ans--;
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
