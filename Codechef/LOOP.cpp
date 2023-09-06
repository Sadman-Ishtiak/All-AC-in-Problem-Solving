#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,m;
        cin >> a >> b >> m;
        cout << min(abs(a-b),abs(abs(a-b)-m)) << endl;
    }
	return 0;
}