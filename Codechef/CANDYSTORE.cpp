#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x>y) cout << y << endl;
        else cout << 2*y-x << endl;
    }
	return 0;
}