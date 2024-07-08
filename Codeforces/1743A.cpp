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

int fact(int n){
    int a = 1;
    for (int i = 1; i < n+1; i++){
        a *= i;
    }
    return a;
}

void solve(){
    int n;
    cin >> n;
    int nums[10] = {0};
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums[x] = 1;
    }
    cout << 3 * fact(10-n) / fact(10 - n - 2) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}