#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a == x) ans++;
        if(b == y) ans++;
        if(a == y) ans++;
        if(b == x) ans++;
        cout << 2-ans << endl;
    }
	return 0;
}