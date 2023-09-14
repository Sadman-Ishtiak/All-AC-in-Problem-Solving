#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a+10*x < b+10*y) cout << "Chef" << endl;
        else if(a+10*x > b+10*y) cout << "Chefina" << endl;
        else cout << "Draw" << endl;
    }
	return 0;
}
