#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(x>y) cout << x*(b)+y*(a-b) << endl;
        else cout << a*x << endl;
    }
	return 0;
}