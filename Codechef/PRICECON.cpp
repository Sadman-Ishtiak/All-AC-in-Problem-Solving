#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    ll sum = 0;
    ll reduced = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        if(a[i] > k) reduced += k;
        else reduced += a[i];
    }
    cout << sum - reduced << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}