#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b;
        c = b*(b+1)/2;
        if(a>=c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}