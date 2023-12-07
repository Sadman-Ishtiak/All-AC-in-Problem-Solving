#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int m; cin >> m;
    vector<long long int>ans(a[n-1]+1, 0);
    for (int i = 0; i < n; i++) ans[a[i]]++;
    for (int i = 1; i < a[n-1]+1; i++) ans[i] += ans[i-1];
    while (m--)
    {
        long long int k;
        cin >> k;
        if(k > a[n-1]) cout << ans[a[n-1]] << endl;
        else cout << ans[k] << endl;
    }
     
    
    // for(auto i : a) cout << i << " ";
    // cout << endl;
    // for(auto i : ans) cout << i << " ";
    // cout << endl;
    return 0;
}