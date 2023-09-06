#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ans = 0;
        while (a-b > 0){
            ans++;
            a -= ans;
        }
        cout << ans << endl;
    }
	return 0;
}