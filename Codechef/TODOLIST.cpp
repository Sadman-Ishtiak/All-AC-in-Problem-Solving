#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        int n, temp;
        cin >> n;
        while (n--)
        {
            cin >> temp;
            if(temp>= 1000) ans++;
        }
        cout << ans << endl;
    }
	return 0;
}