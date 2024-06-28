#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    char c;
    cin >> c;
    ld nums[12][12], sum = 0;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> nums[i][j];
        }
    }
    for (int i = 7; i < 12; i++){
        for (int j = 12-i; j < i; j++){
            sum += nums[j][i];
        }
    }
    
    if(c == 'S') printf("%.1lf\n", sum);
    else printf("%.1lf\n", sum/30.0);
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}