#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b;
        c = 21 - (a+b);
        if(c > 10 || c < 1) c = -1;
        cout << c << endl;
    }
	return 0;
}