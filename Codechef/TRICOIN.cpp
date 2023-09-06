#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n, ans = 0;
        cin >> n;
        for (long long int i = 0;; i++) {
            n = n - i;
            ans = i;
            if(n < 0) break;
        }
        cout << ans-1 << endl;
    }
	return 0;
}