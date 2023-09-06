#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >>c;
        cout << min(10*a,b)*c << endl;
    }
	return 0;
}