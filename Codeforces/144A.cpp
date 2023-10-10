#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++) cin >> h[i];
    int t = 0, s = 0;
    for (int i = 0; i < n; i++){
        if(h[i] > h[t]) t = i;
        if(h[i] <= h[s]) s = i;
    }
    int ans = t;
    if(s > t) ans += n-1-s;
    else ans += n-2-s;
    cout << ans << endl;
	return 0;
}