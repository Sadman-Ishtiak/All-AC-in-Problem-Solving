#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a+c*d > b) cout << "overFlow" << endl;
        else if(a+c*d < b) cout << "Unfilled" << endl;
        else cout << "filled" << endl;
    }
	return 0;
}