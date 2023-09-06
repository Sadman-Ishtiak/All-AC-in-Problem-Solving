#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
	    cin >> x >> y >> z;
	    if( y%z==0 ) cout << (y/z)*x << endl;
	    else cout << ((y/z)+1)*x << endl;
    }
	return 0;
}