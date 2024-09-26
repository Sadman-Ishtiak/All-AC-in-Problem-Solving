#include<bits/stdc++.h>
// #define     int             long long
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

int BitCount(unsigned int u)
{
    unsigned int uCount;
    uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
    return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}

void backtrack(string s, int index, string curr, vector<string>&ans){
    if(index == s.size()){
        ans.push_back(curr);
        return;
    }
    if(s[index] == '?'){
        for (char i = '0'; i <= '9'; i++) {
            backtrack(s, index+1, curr+i, ans);
        }
    } else backtrack(s, index+1, curr+s[index], ans);
}

vector<int> solutions(string s){
    vector<string> ans;
    backtrack(s, 0, "", ans);
    vector<int>result;
    for (auto &&i : ans) {
        result.push_back(stoi(i));
    }
    return result;
}

void solve(){
    string s;
    cin >> s;
    vector<int>ans = solutions(s);
    int tans = ans[0], flag = BitCount(ans[0]);
    for (auto &&i : ans) {
        if(BitCount(i) >= flag) {
            flag = BitCount(i);
            tans = i;
        }
    }
    cout << tans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}