#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans = (c/a)+(c/b);
        if(c%a != 0) ans++;
        cout << ans << endl;
    }
	return 0;
}