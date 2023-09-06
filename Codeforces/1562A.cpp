#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int k = r/2+1;
        if(k<l) k = l;
        cout << r%k << endl;
    }
	return 0;
}
