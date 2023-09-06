#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n <= 15) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}