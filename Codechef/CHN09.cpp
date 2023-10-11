#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == 'a') a++;
        if(s[i] == 'b') b++;
    }
    cout << min(a,b) << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}