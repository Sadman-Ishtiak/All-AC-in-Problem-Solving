#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    int ans = 0,sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum = sum + a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
        ans++;
        if(s > sum/2) break;
    }
    cout << ans;
    return 0;
}