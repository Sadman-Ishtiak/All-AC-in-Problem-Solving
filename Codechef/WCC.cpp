#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int x;
    cin >> x;
    string s;
    cin >> s;
    int c = 0,m = 0;
    for (int i = 0; i < 14; i++){
        if(s[i] == 'C') m+=2;
        if(s[i] == 'N') c+=2;
    }
    if(m < c) cout << 40*x << endl;
    else if (m > c) cout << 60*x << endl;
    else cout << 55*x << endl;
    
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}