#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, ans;
        cin >> a >> b;
        ans = b/a;
        if(ans*a == b) cout << ans - 1 << endl;
        else cout << ans << endl;
    }
	return 0;
}