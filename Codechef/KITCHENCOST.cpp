#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int>fresh(n), cost(n);
        for (int i = 0; i < n; i++) cin >> fresh[i];
        for (int i = 0; i < n; i++) cin >> cost[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
            if(fresh[i] >= x) ans += cost[i];
        cout << ans << endl;
    }
	return 0;
}