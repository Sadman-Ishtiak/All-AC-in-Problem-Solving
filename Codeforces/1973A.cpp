#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>a(3);
    cin >> a[0] >> a[1] >> a[2];
    if ((a[0] + a[1] + a[2]) % 2 == 1){
        cout << -1 << endl;
        return;
    }
    int ans = min((a[0] + a[1] + a[2])/2, a[0] + a[1]);
    cout << ans << endl;
}

int main(){
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}