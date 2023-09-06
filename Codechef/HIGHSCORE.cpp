#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << min(max({a,b,c,d}),n) << endl;
    }
	return 0;
}