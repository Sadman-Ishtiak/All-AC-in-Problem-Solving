#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<80)
        std::cout << "NO" << std::endl;
        else 
        std::cout << "YES" << std::endl;
    }
	return 0;
}