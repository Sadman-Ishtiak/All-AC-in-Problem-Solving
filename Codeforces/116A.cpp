#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t,ans = 0,passenger = 0;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        passenger = passenger - a + b;
        ans = max(ans, passenger);
    }
    cout << ans;
	return 0;
}
