#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << max(a,b) - min(a,b) << endl;
    }
	return 0;
}