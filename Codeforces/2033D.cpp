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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    set<int>flag;
    int prefix_sum = 0;
    for (int i = 0; i < n; i++) {
        prefix_sum += a[i];
        if(prefix_sum == 0 || a[i] == 0) {
            prefix_sum = 0;
            flag.clear();
            ans++;
        }
        if(flag.find(prefix_sum) == flag.end()) flag.insert(prefix_sum);
        else {
            flag.clear();
            prefix_sum = 0;
            ans++;
        }
    }
    
    // vector<int>b(n,0);
    // b[0] = a[0];
    // for (int i = 1; i < n; i++) {
    //     b[i] = b[i-1] + a[i];
    // }
    // set<int>flag;
    // int counter = 0;
    // vector<int>arr(n);
    // int ans = 0, i = 0, j = i+1;
    // for (int i = 0; i < n; i++) {
    //     counter = flag.size();
    //     flag.insert(b[i]);
    //     if(flag.size() == counter || a[i] == 0){
    //         ans++;
    //         flag.clear();
    //     }
    // }

    // while (i < n && j < n) {
    //     if(a[i] == 0) {
    //         i = i+1;
    //         j = i+1;
    //         flag.clear();
    //         ans++;
    //     } else if(a[j] == 0) {
    //         i = j+1;
    //         j = i+1;
    //         ans++;
    //         flag.clear();
    //     } else {
    //         flag.insert(b[i]);

    //     }
    //     j++;
    // }
    // for (i = 0; i < n-1; i++) {
    //     if(arr[i] == arr[i+1]) {
    //         ans++;
    //         i++;
    //     }
    // }
    
    cout << ans << endl;
    // cout << n - flag.size() << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}