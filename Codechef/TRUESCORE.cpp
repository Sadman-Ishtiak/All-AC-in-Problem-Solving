#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a1,a2,b1,b2;
        cin >> a1 >> b1 >>a2 >> b2;
        if(a2 >= a1 && b2 >= b1) cout << "POSSIBLE" << endl;
        else cout << "IMPOSSIBLE" << endl;
    }
	return 0;
}