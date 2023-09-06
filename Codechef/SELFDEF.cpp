#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if((temp >= 10) && (temp <= 60)) ans++;
        }
        
        cout << ans << endl;
    }
	return 0;
}