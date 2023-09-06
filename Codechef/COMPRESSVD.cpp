#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,f1 = 0,f2 = 0;
        cin >> n;
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            cin >> f1;
            if(f1 == f2) ans--;
            f2 = f1;
        }
        cout << ans << endl;;
    }
	return 0;
}