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
    unordered_set<int>nums;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // sort(a)
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int x = a[i] ^ a[j];
            if(nums.find(x) == nums.end()) nums.insert(x);
            else {
                YES;
                return;
            }
        }
    }
    NO;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}