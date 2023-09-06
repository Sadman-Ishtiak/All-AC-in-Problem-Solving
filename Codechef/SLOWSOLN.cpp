#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c, ans;
        cin >> a >> b >> c;
        ans = min(a, c/b) * b*b;
        if(a> c/b)
            ans +=  + (c%b)*(c%b);
        cout << ans << endl;
    }
	return 0;
}