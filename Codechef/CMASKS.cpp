#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int c,d;
        cin >> d >> c;
        if(d*100>=c*10) cout << "Cloth" << endl;
        else cout << "Disposable" << endl;
    }
	return 0;
}