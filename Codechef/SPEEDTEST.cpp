#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a/b > c/d) cout << "Alice" << endl;
        else if(a/b < c/d) cout << "Bob" << endl;
        else cout << "Equal" << endl;
    }
	return 0;
}