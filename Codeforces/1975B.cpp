#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "Yes" << '\n'
#define     NO              cout << "No" << '\n'
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
    int m = __INT64_MAX__;
    // vector<set<int>>divisibles;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        m = min(m, a[i]);
    }
    if(m == 1){
        YES;
        return;
    }
    sort(a)
    vector<int>x, y;
    x.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] % a[0] == 0) x.push_back(a[i]);
        else y.push_back(a[i]);
    }
    sort(y)
    bool ans = true;
    for (int i = 1; i < y.size(); i++){
        if(y[i] % y[0]) {
            ans = false;
            break;
        }
    }
    
    if(ans) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}