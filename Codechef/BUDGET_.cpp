#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(b*30 <= a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}