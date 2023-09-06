#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int a[3],flag = 1;
        cin >> a[0] >> a[1] >> a[2];
        for (int i = 2; i >= 0; i--)
        {
            long long int x = (a[0] * a[1] * a[2]) / a[i];
            if ((x % a[i] == 0) && (x / a[i] != 0)) {
                cout << x << " " << a[i] << endl;
                flag = 0;
                break;
            }
        }
        if(flag) cout << -1 << endl;
    }
	return 0;
}