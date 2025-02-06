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
    vector<int>b(n);
    set<int>uniques;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (uniques.find(a[i]) == uniques.end())
            b[i] = a[i];
        uniques.insert(a[i]);
    }
    vector<int>numbers(n+1, 0);
    for (auto &&i : uniques) {
        numbers[i] = 1;
    }
    int curr = 1;
    for (int i = 0; i < n; i++) {
        if(b[i] == 0) {
            while (numbers[curr] != 0) {
                curr++;
            }
            b[i] = curr;
            numbers[curr] = 1;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}