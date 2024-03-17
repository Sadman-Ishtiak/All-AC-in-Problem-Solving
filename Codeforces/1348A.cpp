#include <bits/stdc++.h>
#define     int             long long int
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

vector<int>ans;

void solve(){
    int n;
    cin >> n;
    vector<int>a,b;
    int l = 1, r= n-2, suma = 0, sumb = 0;
    suma += ans[n];
    // sumb += ans[n-1];
    for (int i = 1; i < n/2; i++){
        suma += ans[i];
    }
    for (int i = n/2; i < n; i++){
        sumb += ans[i];
    }
    
    // cout << suma << " " << sumb << endl;
    cout << abs(suma - sumb) << endl;
}

int32_t main() {
    for (int i = 0; i <= 32; i++){
        ans.push_back(1ll<<i);
        // cout << ans.back() << " ";
    }
    
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}