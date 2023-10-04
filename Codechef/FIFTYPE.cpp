#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    while(n != 50) {
        if(n > 50){
            n -= 3;
            ans++;
        }
        else{
            n+=2;
            ans++;
        }
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