#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ans = 1<<(b-a);
        cout << ans << endl;
    }
	return 0;
}