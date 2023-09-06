#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(max({a,b,c,d}) > (a+b+c+d-max({a,b,c,d}))) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
	return 0;
}