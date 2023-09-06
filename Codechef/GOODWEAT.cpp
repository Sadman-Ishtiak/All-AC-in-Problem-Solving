#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,ans = 0;
        for (int i = 0; i < 7; i++){
            cin >> a;
            ans += a;
        }
        if(ans > 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}