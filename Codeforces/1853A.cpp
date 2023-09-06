#include<bits/stdc++.h>
using namespace std;
void output(int n){
    if(n < 0) cout << 0 << endl;
    else if(n % 2 == 0) cout << n/2+1 << endl;
    else cout << (n+1)/2 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = INT32_MAX;
        for(int i = 1; i < n; i++)
        {
            ans = min(ans,a[i] - a[i-1]);
        }
        output(ans);
    }
    return 0;
}