#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b>a) a+=c;
        else b+=c;
        if(b>a) a+=d;
        else b+=d;
        if(b>a) cout << "S" << endl;
        else cout << "N" << endl;
    }
	return 0;
}