#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
void solve(){
	int n;
	cin >> n;
	int ans = 0;
	int up = 0, down = 0;
	std::vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a)
	reverse(all(a));
	for (int i = 0; i < n; i++) {
	    int t = a[i];
	    if(t == 1) up++;
	    else if(t == 2) down++;
	    else{
	        if(down>up) down++;
	        else up++;
	    }
	}
	cout << up << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
