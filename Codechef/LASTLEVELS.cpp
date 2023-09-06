#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,c;
        cin >> a >> b >> c;
        cout << a*b + floor((a-1)/3)*c << endl;
    }
	return 0;
}