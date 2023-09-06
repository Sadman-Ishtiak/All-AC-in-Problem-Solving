#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        std::cout << a*10+b*90 << std::endl;
    }
	return 0;
}