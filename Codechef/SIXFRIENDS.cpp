#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << min(3*a,2*b) << endl;
    }
	return 0;
}