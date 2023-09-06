#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(2*a > b) cout << b*2+a << endl;
        else cout << 5*a << endl;
    }
	return 0;
}