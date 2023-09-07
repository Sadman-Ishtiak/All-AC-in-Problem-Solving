#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t, ans = 0;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a+2 <= b) ans++;
    }
    cout << ans;
	return 0;
}