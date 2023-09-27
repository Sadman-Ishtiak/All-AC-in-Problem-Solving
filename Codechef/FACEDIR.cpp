#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n;
    cin >> n;
    n %= 4;
    if (n == 0) cout << "North" << endl;
    else if (n == 1) cout << "East" << endl;
    else if (n == 2) cout << "South" << endl;
    else cout << "West" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
