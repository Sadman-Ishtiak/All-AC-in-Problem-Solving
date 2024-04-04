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
    string s;
    cin >> s;
    int n = s.length();
    int cmap[26] = {0};
    for (int i = 0; i < n; i++)
    {
        cmap[s[i] - 'a']++;
    }
    vector<char>ans;
    for (int i = 0; i < 26; i++)
        if(cmap[i] == 2) ans.push_back(i+'a');
    for (int i = 0; i < 26; i++)
        if(cmap[i] == 1) ans.push_back(i+'a');
    for (int i = 0; i < 26; i++)
        if(cmap[i] == 2) ans.push_back(i+'a');
    for(auto var : ans)
        cout << var;
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}