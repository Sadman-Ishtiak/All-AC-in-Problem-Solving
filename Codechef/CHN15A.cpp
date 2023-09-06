#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k,ans = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if((temp+k)%7 == 0) ans++;
        }
        cout << ans << endl;
    }
	return 0;
}