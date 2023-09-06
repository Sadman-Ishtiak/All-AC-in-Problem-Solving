#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if (b>a)
        {
            cout << b-a << endl;
        }
        else
            cout << 0 << endl;
    }
	return 0;
}