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

int n;

void backtrack(int rem, int counter, string test, set<string>&answers) {
    if(answers.size() == n) return;
    if(rem == 0) {
        for (int i = 0; i < counter; i++) {
            test += ')';
        }
        answers.insert(test);
        return;
    }
    backtrack(rem-1, counter, test + "()", answers);
    backtrack(rem-1, counter+1, test + '(', answers);
}

void solve(){
    cin >> n;
    set<string>answers;
    string s;
    backtrack(n, 0, s, answers);
    int counter = 0;
    for (auto &&i : answers)
    {
        counter++;
        if(counter > n) break;
        cout << i << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}