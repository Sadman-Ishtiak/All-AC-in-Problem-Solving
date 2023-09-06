#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        char x;
        cin >> a >> x >> b >> x >> c;
        if(a > 12) cout << "DD/MM/YYYY" << endl;
        else if(b > 12) cout << "MM/DD/YYYY" << endl;
        else cout << "BOTH" << endl;
    }
	return 0;
}