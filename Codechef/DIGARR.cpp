#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int d;
    bool flag = false;
    cin >> d;
    for (int i = 0; i < d; i++){
        char s;
        cin >> s;
        if(s == '0' || s == '5') flag = true;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}