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
    int n;
    cin >> n;
    map<string, pair<string, int>>remembered;
    for (int i = 0; i < n; i++){
        string name, bday;
        int point;
        cin >> name >> point >> bday;
        if(remembered.find(bday) == remembered.end()){
            remembered[bday].first = name;
            remembered[bday].second = point;
        } else{
            if (remembered[bday].second < point){
                remembered[bday].first = name;
                remembered[bday].second = point;
            }
        }
    }
    vector<string>ans;
    for(auto i : remembered){
        ans.push_back(i.second.first);
        // cout << i.second.first << endl;
    }
    cout << ans.size() << endl;
    sort(ans)
    for(string i : ans)
        cout << i << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}