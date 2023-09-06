#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n,l,count = 0,ans = 0;
        cin >> n;
        for ( l = 1; l < 10000; l++)
        {
            if(n%l == 0) count++;
            else count = 0;
            ans = max(count,ans);
        }
        cout << ans << endl;
    }
	return 0;
}