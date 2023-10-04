#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
set<int>holidays;
void solve(){
    int n;
    cin >> n;
    int ans = holidays.size();
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(holidays.find(temp) == holidays.end()) ans++;
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < 30; i++){
        if((i+1)%7 == 0) {
            holidays.insert(i);
            holidays.insert(i+1);
        }
    }
    while(t--){
        solve();
    }
	return 0;
}