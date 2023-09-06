#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << max(1500 -2*a - 4*(a+b), 1500 -4*b -2*(a+b)) << endl;
    }
	return 0;
}