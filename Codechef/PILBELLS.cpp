#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans;
        if(c == a) ans = d + 10*min(b,c) + 5*(c-b) + 20;
        else if(c>b) ans = d + 10*min(b,c) + 5*(c-b);
        else ans = d + 10*min(b,c);
        cout << ans << endl;
    }
	return 0;
}