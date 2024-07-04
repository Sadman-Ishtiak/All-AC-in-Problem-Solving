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
    string s;
    cin >> s;
    int counter = 0, k = n - 1;
    while(k>=0 && s[k]==')'){
        counter++;
        k--;
    }
    if(counter > n-counter) YES;
    else NO;
    // cout << counter << " " << n-counter << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}