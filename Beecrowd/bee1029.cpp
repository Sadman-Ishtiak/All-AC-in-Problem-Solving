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
int ct;

int fibo(int n){
    ct++;
    if(n < 2) {
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

void solve(){
    int n;
    cin >> n;
    ct = 0;
    int x = fibo(n);
    // cout << x << " " <<  << endl;
    cout << "fib(" << n <<") = " << ct-1 << " calls = " << x << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}