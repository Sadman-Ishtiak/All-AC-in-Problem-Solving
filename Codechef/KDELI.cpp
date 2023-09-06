#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,p,s;
        cin >> n >> p >> s;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        ll ans = 0;
        sort(a.begin(), a.end(), greater<int>());
        for (int i = s-1; i < n; i += p){
            ans += a[i];
        }
        cout << ans <<  endl;
    }
	return 0;
}