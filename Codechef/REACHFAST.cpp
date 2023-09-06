#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,c;
        cin >> a >> b >> c;
        cout << ceil(abs(a-b)/c) << endl;
    }
	return 0;
}