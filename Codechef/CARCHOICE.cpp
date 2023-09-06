#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a/x < b/y) cout << 1 << endl;
        else if(a/x > b/y) cout << -1 << endl;
        else cout << 0 << endl;
    }
	return 0;
}