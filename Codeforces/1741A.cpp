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
void solve(){
    string s1,s2;
    cin >> s1 >> s2;
    int l1 = s1.length(), l2 = s2.length();
    if(s1[l1-1] == 'S' && s2[l2-1] != s1[l1-1]) cout << "<";
    else if(s1[l1-1] == 'M' && s2[l2-1] == 'L') cout << "<";
    else if(s1[l1-1] == 'M' && s2[l2-1] == 'S') cout << ">";
    else if(s1[l1-1] == 'L' && s2[l2-1] != s1[l1-1]) cout << ">";
    else{
        if(s1.length() == s2.length()) cout << "=";
        else{
            if(s1[l1-1] == 'S'){
                if(s1.length() > s2.length()) cout << "<";
                else cout << ">";
            }
            if(s1[l1-1] == 'L'){
                if(s1.length() < s2.length()) cout << "<";
                else cout << ">";
            }
        }
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}