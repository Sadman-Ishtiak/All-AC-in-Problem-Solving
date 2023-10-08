#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

map<ll,ll>dp;

ll solve(ll n){
    if(n < 12) return n;
    if(dp.find(n) == dp.end())
        dp[n] = max(n,solve(n/2) + solve(n/3) + solve(n/4));
    return dp[n];
}
int main() {
    ll n;
    while(cin >> n){
        cout << solve(n) << endl;
    }
	return 0;
}