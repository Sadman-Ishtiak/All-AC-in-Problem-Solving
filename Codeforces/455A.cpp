#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int n;
    cin >> n;
    int a[100001] = {};
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        m = max(m,t+1);
        a[t]++;
    }
    int ans[m] = {0};
    ans[0] = 0; ans[1] = a[1];
    for(int i = 2; i < m; i++){
        ans[i] = max(ans[i-1], ans[i-2]+a[i]*i);
        // cout << b[i] << " ";
    }
    cout << ans[m-1] << endl;
}