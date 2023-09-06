#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,a;
        int ans = 0;
        cin >> n >> a;
        while(n--){
            int temp;
            cin >> temp;
            if(temp >= a) ans++;
        }
        cout << ans << endl;
    }
	return 0;
}