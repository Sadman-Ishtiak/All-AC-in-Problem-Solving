#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        a = 100 - a;
        b = 200 - 2*b;
        if(a < b) cout << "FIRST" << endl;
        else if(a > b) cout << "SECOND" << endl;
        else cout << "BOTH" << endl;
    }
	return 0;
}