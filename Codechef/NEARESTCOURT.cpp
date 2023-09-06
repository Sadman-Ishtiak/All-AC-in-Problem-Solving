#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ans = abs(a-b);
        if(ans%2 == 0) cout << ans/2 << endl;
        else cout << ans/2+1 << endl;
    }
	return 0;
}