#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 5; i <= n; i*=5)
            ans += n/i;
        cout << ans << endl;
    }
	return 0;
}