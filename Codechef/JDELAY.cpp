#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int n,ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int t1,t2;
        cin >> t1 >> t2;
        if(t2-t1 > 5)ans++;
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