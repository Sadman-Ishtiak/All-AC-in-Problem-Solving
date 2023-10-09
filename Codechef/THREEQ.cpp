#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int o = 0, h = 0;
    for (int i = 0; i < 3; i++){
        int t; cin >> t;
        o += t;
    }
    for (int i = 0; i < 3; i++){
        int t; cin >> t;
        h += t;
    }
    if(o == h) cout << "Pass" << endl;
    else cout << "Fail" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}