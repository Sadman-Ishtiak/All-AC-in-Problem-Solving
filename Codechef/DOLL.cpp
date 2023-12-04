#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp > k) ans++;
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