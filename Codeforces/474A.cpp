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
    string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./";
    char x;
    cin >> x;
    string s;
    cin >> s;
    if(x == 'R'){
        int l = s.length();
        for (int i = 0; i < l; i++){
            if(s1.find(s[i]) < s1.length()) s[i] = s1[s1.find(s[i])-1];
            if(s2.find(s[i]) < s2.length()) s[i] = s2[s2.find(s[i])-1];
            if(s3.find(s[i]) < s3.length()) s[i] = s3[s3.find(s[i])-1];
        }
        cout << s << endl;
    } else {
        int l = s.length();
        for (int i = 0; i < l; i++){
            if(s1.find(s[i]) < s1.length()) s[i] = s1[s1.find(s[i])+1];
            if(s2.find(s[i]) < s2.length()) s[i] = s2[s2.find(s[i])+1];
            if(s3.find(s[i]) < s3.length()) s[i] = s3[s3.find(s[i])+1];
        }
        cout << s << endl;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}