#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,b,c;
        cin >> n >> b >>c;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        if((a[n-1]+c-1) <= b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}