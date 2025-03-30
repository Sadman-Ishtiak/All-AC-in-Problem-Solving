#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
// #define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("stdin", "r", stdin); freopen("stdout", "w", stdout);
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<string>s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<vector<int>> nums(n);
    for (int i = 0; i < n; i++) {
        // cerr << s[i] << " : ";
        for (int j = 0; j < 4; j++) {
            for (char x = '0'; x <= '9'; x++) {
                string temp = s[i];
                temp[j] = x;
                // cerr << temp << " ";
                int provisional = stoll(temp, 0, 10LL);
                if(provisional <= 2011 && provisional >= 1000) nums[i].push_back(provisional);
            }
        }
        // cerr << endl;
    }
    int curr = INT_MIN;
    vector<int>output;
    for (int i = 0; i < n; i++) {
        sort(nums[i].begin(), nums[i].end());
        bool flag = false;
        for (auto &&num : nums[i]) {
            if(num >= curr) {
                curr = num;
                flag = true;
                break;
            }
        }
        if(flag) output.push_back(curr);
    }
    if(output.size() == n) {
        for (int i = 0; i < n; i++) {
            cout << output[i] << endl;
        }
    } else {
        cout << "No solution" << endl;
    }
}
int32_t main() {
    // fileIO
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}