#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
// #define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n, f, k;
    cin >> n >> f >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int value = a[f-1];
    sort(a.rbegin(), a.rend());
    // for (int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    string ans = "kkkkkkk";
    k--;
    if(a[k] == value){
        if(k == n-1) ans = "YES";
        else if(a[k+1] < value) ans = "YES";
        else ans = "MAYBE";
    } else if(a[k] > value) ans = "NO";
    else ans = "YES";
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}