#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a*2 > 5*b)
            cout << "Chocolate" << endl;
        else if(a*2 < b*5)
            cout << "Candy" << endl;
        else 
            cout << "Either" << endl;
    }
	return 0;
}