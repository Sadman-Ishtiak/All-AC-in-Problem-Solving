#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        double a,b,c;
        cin >> a >> b >> c;
        cout << ceil(a/b)*c << endl;
    }
	return 0;
}