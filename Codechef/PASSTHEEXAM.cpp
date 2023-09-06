#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >>c;
        if(a>=10 && b>=10 && c>=10 && (a+b+c)>=100) cout << "PASS" << endl;
        else cout << "FAIL" << endl;
    }
	return 0;
}