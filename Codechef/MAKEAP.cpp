#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b;
        c = (a+b)/2;
        if(2*c == (a+b)) cout << c << endl;
        else cout << -1 << endl;
    }
	return 0;
}