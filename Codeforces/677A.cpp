#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n,h;
    cin >> n >> h;
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if(t>h) ans++;
    }
    cout << ans;
	return 0;
}
