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
    int n, queries;
    cin >> n >> queries;
    stack<int>stack[n];
    for (int i = 0; i < queries; i++) {
        int query, choice, value;
        cin >> query;
        if (query == 0) {
            cin >> choice >> value;
            stack[choice].push(value);
        }
        else if(query == 1) {
            cin >> choice;
            if(!stack[choice].empty()) cout << stack[choice].top() << endl;
        }
        else {
            cin >> choice;
            if(!stack[choice].empty()) stack[choice].pop();
        }
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}