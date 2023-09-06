#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b < c) cout << "PLANEBUS" << endl;
        else if(a+b > c) cout << "TRAIN" << endl;
        else cout << "EQUAL" << endl;
    }
	return 0;
}