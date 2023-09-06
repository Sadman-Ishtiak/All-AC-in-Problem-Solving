#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n<4)
        {
            cout << "MILD" << endl;
        }
        else if (n<7)
        {
            cout << "MEDIUM" << endl;
        }
        else
            cout << "HOT" << endl;
    }
	return 0;
}