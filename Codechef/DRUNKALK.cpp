#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n;
    cin >> n;
    int r = n%2;
    cout << n+2*r << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
