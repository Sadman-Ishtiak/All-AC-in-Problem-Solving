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
    
}
int32_t main() {
    string s;
    int n = 0;
    while(getline(cin, s)){
        for (auto &&i : s) {
            if(i == '"' && (n%2 == 0)) {
                cout << "``";
                n++;
            }
            else if(i == '"' && (n%2 == 1)){
                cout << "''";
                n++;
            }
            else cout << i;
        }
        cout << endl;
    }
    return 0;
}