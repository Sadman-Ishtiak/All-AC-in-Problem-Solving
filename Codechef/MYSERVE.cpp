#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if((a+b) %4 <2) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
	return 0;
}