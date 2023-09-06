#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n>6)
            cout << "GOLD" << endl;
        else if(n>3)
            cout << "SILVER" << endl;
        else
            cout << "BRONZE" << endl;
    }
	return 0;
}