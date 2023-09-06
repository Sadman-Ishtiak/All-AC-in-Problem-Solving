#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 5 != 0) cout << -1 << endl;
        else{
            int ans = n/10;
            if(n%10 == 5) ans++;
            cout << ans << endl;
        }
    }
	return 0;
}