#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; int k;
    cin >> n >> k;
    vector<int>a(n);
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    while (ans < k-1){
        ans += a[ans];
    }
    if(ans == k-1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}