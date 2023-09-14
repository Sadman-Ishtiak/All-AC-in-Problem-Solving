#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int ans = 0;
    for (int i = 1; i < n; i++){
        if (s[i] == s[i-1]){
            ans++;
        }
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
