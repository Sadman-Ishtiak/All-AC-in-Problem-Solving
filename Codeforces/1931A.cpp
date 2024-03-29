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
    vector<char>ans(3);
    if(n>52){
        ans[0] = 'z';
        n-=26;
    } else{
        ans[0] = 'a';
        n--;
    }
    if(n>26){
        ans[1] = 'z';
        n-= 26;
    } else{
        ans[1] = 'a';
        n--;
    }
    ans[2] = 'a'+n-1;
    sort(ans)
    for(char i : ans) cout << i;
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}