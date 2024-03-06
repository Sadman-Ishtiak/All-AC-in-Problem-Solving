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
void smallest(int n, int s){
    if(s > (n-1)*9){
        vector<int>a;
        for (int i = 0; i < n-1; i++)
            a.push_back(9);
        a.push_back(s - 9*(n-1));
        sort(a)
        for(auto i : a) cout << i;
        cout << " ";
    } else{
        vector<int>a;
        int ans = s-1;
        cout << 1;
        for (int i = 0; i < n-1; i++){
            if(ans > 9){
                a.push_back(9);
                ans -= 9;
            } else{
                a.push_back(ans);
                ans = 0;
            }
        }
        
        sort(a)
        // reverse(all(a));
        for(auto i : a) cout << i;
        cout << " ";
    }
}
void largest(int n, int s){
    for (int i = 0; i < n; i++){
        if(s>9){
            cout << 9;
            s-=9;
        }
        else{
            cout << s;
            s = 0;
        }
    }
    
}
void solve(){
    int n, s;
    cin >> n >> s;
    if(s == 0 && n == 1) cout << "0 0" << endl;
    else if(s == 0 || n*9 < s){
        cout << -1 << " " << -1 << endl;
        return;
    } else{
        smallest(n,s);
        largest(n,s);
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}