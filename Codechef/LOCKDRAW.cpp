#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    vector<int>a(3);
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if(a[0] + a[1] == a[2]) cout << "YES" << endl;
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