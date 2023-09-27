#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        ll dp[10010] = {0};
        for (int i = 0; i < 6; i++)
            cin >> dp[i];
        cin >> n;
        for (int j = 6; j <= n; j++){
            dp[j] = (dp[j-1] + dp[j-2] + dp[j-3] + dp[j-4] + dp[j-5] + dp[j-6]) % 10000007;
        }
        
        cout << "Case " << i+1 << ": " << dp[n] % 10000007 << endl;
    }
    return 0;
}