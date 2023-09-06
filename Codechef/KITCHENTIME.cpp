#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int s,e;
        cin >> s >> e;
        cout << (e-s+12)%12 << endl;
    }
	return 0;
}