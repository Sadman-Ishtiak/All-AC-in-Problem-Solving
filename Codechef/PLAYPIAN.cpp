#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2){
        if(s[i] == s[i+1]){
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}