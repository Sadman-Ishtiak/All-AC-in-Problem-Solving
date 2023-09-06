#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n>=7)
        {
            cout << "HEAVY" << endl;
        }
        else if (n>=3)
        {
            cout << "MODERATE" << endl;
        }
        else
            cout << "LIGHT" << endl;
    }
	return 0;
}