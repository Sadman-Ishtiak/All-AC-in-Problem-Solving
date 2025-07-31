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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0LL);
    s -= sum;
    if(s == 0) {
        cout << -1 << endl;
        return;
    }
    if(s < 0) {
        for (auto &&i : a) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    vector<int> counter(3, 0);
    for (int i = 0; i < n; i++) {
        counter[a[i]]++;
    }
    vector<int> numbers = {0,1,2};
    do {
        // for (auto &&i : numbers) {
        //     cerr << i << " ";
        // } cerr << endl;
        vector<int> b (n);
        int x = 0;
        for (auto &&i : numbers) {
            for (int j = 0; j < counter[i]; j++) {
                b[x++] = i;
            }
        }
        set<int> looping_sums;
        for (int i = 1; i < n; i++) {
            looping_sums.insert(b[i] + b[i-1]);
        }
        vector<int> dp(s + 1000, 0);
        dp[0] = 1;
        for (auto &&i : looping_sums) {
            for (int j = i; j <= s; j++) {
                if (dp[j - i]) dp[j] = true;
            }
        }
        if(dp[s] == 0) {
            for (auto &&i : b) {
                cout << i << " ";
            }
            cout << endl;
            return;
        }
    } while(next_permutation(numbers.begin(), numbers.end()));
    cout << -1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}