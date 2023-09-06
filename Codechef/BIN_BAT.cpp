#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans = 0;
        while (a > 1)
        {
            ans += b+c;
            a = a>>1;
        }
        cout << ans-c << endl;
    }
	return 0;
}