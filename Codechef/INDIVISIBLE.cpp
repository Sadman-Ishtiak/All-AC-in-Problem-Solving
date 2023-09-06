#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans;
        for (int i = 99; i > 0; i--)
        {
            if(i%a != 0 && i%b != 0 && i%c != 0){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
	return 0;
}