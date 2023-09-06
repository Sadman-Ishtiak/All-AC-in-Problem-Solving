#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,c;
        cin >> a >> b >> c;
        cout << ceil((a+c/30)/b) << endl;
    }
	return 0;
}