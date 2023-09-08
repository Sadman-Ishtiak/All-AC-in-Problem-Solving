#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        double a,b,c;
        cin >> a >> b >> c;
        double moved = abs(a-b)/2;
        int ans = ceil(moved/c);
        cout << ans << endl;
    }
	return 0;
}
