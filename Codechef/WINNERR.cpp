#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(max(a,b) > max(c,d)) cout << "Q" << endl;
        else if(max(a,b) < max(c,d)) cout << "P" << endl;
        else cout << "TIE" << endl;
    }
	return 0;
}