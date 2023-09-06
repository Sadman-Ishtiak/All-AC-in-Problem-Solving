#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b,c,d;
        cin >> a >> b;
        if(a*107>=b*100) cout << "YES" <<endl;
        else cout << "NO" << endl;
    }
	return 0;
}