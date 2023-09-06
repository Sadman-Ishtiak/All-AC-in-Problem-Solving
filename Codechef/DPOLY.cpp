#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, ans;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            if(tmp != 0) ans = i;
        }
        cout << ans << endl;
    }
	return 0;
}