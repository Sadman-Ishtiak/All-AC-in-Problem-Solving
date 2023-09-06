#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(max({a,c,b}) > a+b+c-max({a,b,c})) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }
	return 0;
}