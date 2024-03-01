#include<bits/stdc++.h>

using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < n && k>0; i++){
        if(b[i] > a[i]){
            k--;
            a[i] = b[i];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans += a[i];
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--)
        solve();
    
    return 0;
}