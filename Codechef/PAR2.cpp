#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==0)
            printf("YES\n");
        else
            cout << "NO\n" ;
    }
	return 0;
}