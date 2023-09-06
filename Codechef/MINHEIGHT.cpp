#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a<b)
            std::cout << "NO" << std::endl;
        else
            cout << "YES\n";
    }
	return 0;
}