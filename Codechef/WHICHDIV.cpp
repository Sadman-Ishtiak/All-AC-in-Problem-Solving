#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;
        if(r >= 2000) cout << 1 << endl;
        else if(r >= 1600) cout << 2 << endl;
        else cout << 3 << endl;
    }
	return 0;
}
