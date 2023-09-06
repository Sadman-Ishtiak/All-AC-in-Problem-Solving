#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        cout << max({a[0],a[1],a[2]})-min({a[0],a[1],a[2]}) << endl;
    }
	return 0;
}