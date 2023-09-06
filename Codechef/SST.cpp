#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a*2 > b) cout << "FIRST" << endl;
        else if(a*2 < b) cout << "SECOND" << endl;
        else cout << "ANY" << endl;
    }
	return 0;
}