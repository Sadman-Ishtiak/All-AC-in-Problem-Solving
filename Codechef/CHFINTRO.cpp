#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int k;
void solve(){
    int n;
    cin >> n;
    if(n >= k) cout << "Good boi" << endl;
    else cout << "Bad boi" << endl;
}
int main() {
    int t;
    cin >> t >> k;
    while(t--){
        solve();
    }
	return 0;
}