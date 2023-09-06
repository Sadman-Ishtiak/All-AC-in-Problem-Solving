#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(c>=a+b) cout << 2 << endl;
        else if(c>=a) cout << 1 << endl;
        else cout << 0 << endl;
    }
	return 0;
}