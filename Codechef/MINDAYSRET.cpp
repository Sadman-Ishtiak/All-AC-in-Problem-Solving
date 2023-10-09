#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    ld x,y;
    cin >> x >> y;
    cout << ceil(x/y) << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}