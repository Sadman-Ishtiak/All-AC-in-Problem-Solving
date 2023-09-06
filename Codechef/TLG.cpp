#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, player, ans = 0, p1 = 0, p2 = 0;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        p1 += a;
        p2 += b;
        if(abs(p1-p2) > ans){
            ans = abs(p1-p2);
            if(p1>p2) player = 1;
            else player = 2;
        }
    }
    cout << player << " " << ans;
	return 0;
}