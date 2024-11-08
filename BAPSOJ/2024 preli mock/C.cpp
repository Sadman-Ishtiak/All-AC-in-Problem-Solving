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


void solve(int t){
    string ans = "invalidum";
    vector<int>score(3);
    cin >> score[0] >> score[1] >> score[2];
    sort(score)
    if(score[2] == 6){
        if(score[1] == 3 && score[0] == 0) ans = "perfectus";
        if(score[1] == 1 && score[0] == 1) ans = "perfectus";
    }
    if(score[2] == 4){
        if(score[1] == 4 && score[0] == 0) ans = "perfectus";
        if(score[1] == 2 && score[0] == 1) ans = "perfectus";
        if(score[1] == 3 && score[0] == 1) ans = "perfectus";
    }
    if(score[2] == 3 && score[0] == 3) ans = "perfectus";
    if(score[2] == 2 && score[0] == 2) ans = "perfectus";
    cout << "Case " << t+1 << ": " << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve(i);
    }
    
    return 0;
}