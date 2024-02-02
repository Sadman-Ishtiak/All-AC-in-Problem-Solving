#include <bits/stdc++.h>
#define endl            '\n'
#define ld              long double
#define all(x)          x.begin(),x.end()
#define int             long long
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define sort(x)         sort(all(x))

using namespace std;

int32_t main() {
    int a[4];
    for (int i = 0; i < 4; i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++){
        ans += a[s[i] - '0'-1];
        // cout << ans << " ";
    }
    cout << ans;
	return 0;
}
