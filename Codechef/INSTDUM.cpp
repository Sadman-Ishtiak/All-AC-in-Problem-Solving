#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin >> n;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++){
        int tp;
        cin >> tp;
        sum += tp;
        if(sum == i+1) ans++;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
