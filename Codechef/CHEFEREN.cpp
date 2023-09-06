#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if(i%2 == 0) ans+=m;
            else ans+=k;
        }
        cout << ans << endl;
    }
	return 0;
}