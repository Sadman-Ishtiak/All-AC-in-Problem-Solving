#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    ll sum = 0;
    int m = INT32_MAX;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        m = min(m,a[i]);
    }
    cout << sum - m << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}