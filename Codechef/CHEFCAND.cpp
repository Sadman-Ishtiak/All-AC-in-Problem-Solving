#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b;
        cin >> a >> b;
        if(a>b) cout << ceil((a-b)/4) << endl;
        else cout << 0 << endl;
    }
	return 0;
}