#include <bits/stdc++.h>
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
    vector<int>arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k = abs(arr[n-1] - arr[0]);
    int a = n, b = 1;
    for (int i = 1; i < n; i++){
        if (abs(arr[i] - arr[i-1]) < k){
            a = i;
            b = i+1;
            k = abs(arr[i] - arr[i-1]);
        }
    }
    cout << a << " " << b;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}