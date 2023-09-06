#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(max({a,b,c}) > (a+b+c-max({a,b,c}))) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}