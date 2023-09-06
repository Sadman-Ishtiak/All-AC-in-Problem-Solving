#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        int even = 0, odd = 0;
        for (int i = 0; i < 3; i++)
        {
            if(a[i] %2 == 0) even++;
            else odd++;
        }
        if(even > 0 && odd > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}