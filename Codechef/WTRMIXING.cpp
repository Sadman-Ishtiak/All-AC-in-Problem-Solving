#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a < b){
            if(x >= b-a) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(a > b){
            if(y >= a-b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
	return 0;
}