#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    cout << ceil(a/5.0) - ceil(b/5.0) << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}