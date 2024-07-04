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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool ans = true;
    int counter = 0, position = n;
    for (int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]){
            counter++;
            position = i;
        }
    }
    if(counter > 1) ans = false;
    if(a[n-1] > a[0] && counter == 1) ans = false;
    // cout << position << " " << counter << " " ;
    if(ans) YES;
    else NO;
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}