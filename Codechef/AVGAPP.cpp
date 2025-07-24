#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int minindex = 0;
    int secondminindex = 1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < a[minindex]) {
            secondminindex = minindex;
            minindex = i;
        } else if(a[i] < a[secondminindex] && i != minindex) {
            secondminindex = i;
        }
    }
    int firstmin = a[minindex];
    int secondmin = a[secondminindex];
    int sum = accumulate(a.begin(), a.end(), 0LL);
    for (int i = 0; i < k; i++) {
        int avg = firstmin + secondmin + 1;
        avg /= 2;
        if(avg < secondmin) {
            secondmin = avg;
            sum += avg;
        } else {
            sum += avg * (k - i);
            break;
        }
    }
    cout << sum << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}