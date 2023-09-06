#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,a;
        cin >> n >> a;
        while (n--)
        {
            int temp;
            cin >> temp;
            if(temp <= a){
                a = a - temp;
                cout << 1;
            }
            else cout << 0;
        }
        cout << '\n';
    }
	return 0;
}