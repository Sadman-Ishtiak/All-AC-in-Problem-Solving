#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        ans += n/100;
        n %= 100;
        ans += n/50;
        n %= 50;
        ans += n/10;
        n %= 10;
        ans += n/5;
        n %= 5;
        ans += n/2;
        n%= 2;
        cout << ans+n << endl;
    }
	return 0;
}