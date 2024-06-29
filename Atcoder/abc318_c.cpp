#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,d,c;
    cin >> n >> d >> c;
    vector<ll>f(n);
    for (auto &&i : f)
        cin >> i;
    sort(f.begin(), f.end());
    reverse(f.begin(), f.end());
    int64_t ans = 0;
    bool broken = true;
    for (int i = 0; i < n;){
        ll temp = 0;
        if(broken){for (int j = i; j < i+d; j++){
            if(j>=n) break;
            temp += f[j];
        }}
        if(temp >= c){
            i = i + d;
            ans += c;
        }
        else{ans += f[i];i++; broken = false;}
    }
    cout << ans;
	return 0;
}
