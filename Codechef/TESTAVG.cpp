#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c-max({a,b,c}) >= 70) cout << "Pass" << endl;
        else cout << "Fail" << endl;
    }
	return 0;
}