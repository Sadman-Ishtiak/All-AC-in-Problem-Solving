#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%10 < 5) cout << 100 - (n/10)*10 << endl;
        else cout << 100 - (n/10+1)*10 << endl;
    }
	return 0;
}