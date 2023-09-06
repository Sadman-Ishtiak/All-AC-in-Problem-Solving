#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b;
        cin >> a >> b;
        cout << abs(ceil(a/10) - ceil(b/10)) << endl;
    }
	return 0;
}