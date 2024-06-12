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
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    int l = 0, r = 0, curr = 0, L = 0, R = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            curr++;
        } else{
            curr--;
        }
        if(curr < 0){
            l = i+1;
            r = i+1;
            curr = 0;
            
        }
        if (curr >= ans){
            r = i;
            ans = curr;
            L = l;
            R = r;
        }
        // cout << l << " " << r << " " << curr << endl;
    }
    for (int i = L; i <= R && i < n; i++){
        a[i] ^= 1;
    }
    ans = 0;
    for (int i = 0; i < n; i++){
        ans += a[i];
    }
    if (L>=n){
        ans--;
    }
    
    cout << ans;
}
int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}