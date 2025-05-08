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
    vector<int>a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a)
    vector<pair<int, int>>possible_sum;
    int sum = accumulate(a.begin(), a.end(), 0LL);
    for (int i = 0; i < 4; i++) {
        int currsum = a[i];
        possible_sum.push_back(make_pair(currsum, sum - currsum));
        for (int j = i+1; j < 4; j++) {
            currsum += a[j];
            possible_sum.push_back(make_pair(currsum, sum - currsum));
            for (int k = j+1; k < 4; k++) {
                currsum += a[k];
                possible_sum.push_back(make_pair(currsum, sum - currsum));
                for (int l = k+1; l < 4; l++) {
                    currsum += a[l];
                    possible_sum.push_back(make_pair(currsum, sum - currsum));
                    currsum -= a[l];
                }
                currsum -= a[k];
            }
            currsum -= a[j];
        }
        currsum -= a[i];
    }
    for (auto &&i : possible_sum) {
        if(i.first == i.second) {
            YES;
            return;
        }
    }
    NO;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}