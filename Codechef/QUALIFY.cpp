#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(b+c*2 < a) cout << "Not";
        cout << "Qualify" << endl;
    }
	return 0;
}