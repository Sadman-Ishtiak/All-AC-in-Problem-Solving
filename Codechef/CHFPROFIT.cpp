#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int x,y,z;
    cin >> x >> y >> z;
    cout << x*z-y*x << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
