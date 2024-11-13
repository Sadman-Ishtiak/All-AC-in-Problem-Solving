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
template <typename T>
std::set<T> vectorToSet(const std::vector<T>& vec) {
    return std::set<T>(vec.begin(), vec.end());
}


void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> st = vectorToSet(a);
    if(st.find(0) != st.end()) {
        int c = 0;
        for (int i = 0; i < n; i++) {
            if(a[i] == 0) c++;
        }
        cout << n - c<< endl;
    } else if(st.size() < n) {
        cout << n << endl;
    } else cout << n+1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}