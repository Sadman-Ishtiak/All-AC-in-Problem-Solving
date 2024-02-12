#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, small = INT32_MAX, big = INT32_MIN;
    cin >> n;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        small = min(t, small);
        big   = max(t, big);
    }
    cout << big - small << endl;
}

int main(){
    int n;
    cin >> n;
    while (n--)
        solve();
    
    return 0;
}