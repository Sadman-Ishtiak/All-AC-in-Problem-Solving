#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int ans = 0;
    if(n < a) cout << ans << endl;
    else{
        ans++;
        n -= a;
        ans += n/b;
        cout << ans << endl;
    }
	return 0;
}
