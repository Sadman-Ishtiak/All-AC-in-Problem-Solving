#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a/x < b/y) cout << "Chef" << endl;
        else if(a/x > b/y) cout << "Chefina" << endl;
        else cout << "Both" << endl;
    }
	return 0;
}