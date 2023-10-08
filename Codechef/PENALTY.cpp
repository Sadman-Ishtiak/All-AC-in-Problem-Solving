#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int a = 0, b = 0, t = 0;
    for (int i = 0; i < 10; i++){
        cin >> t;
        if(i%2 == 0) a+= t;
        else b += t;
    }
    if(a > b) cout << 1 << endl;
    else if(b > a) cout << 2 << endl;
    else cout << 0 << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}