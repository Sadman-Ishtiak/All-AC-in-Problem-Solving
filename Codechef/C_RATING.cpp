#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b;
        cin >> a >> b;
        cout << ceil((b-a)/8) << endl;
    }
	return 0;
}