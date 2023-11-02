#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll>a(n);
    ll ans = 0, temp = 1;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++){
        if(a[i] >= a[i-1]) temp++;
        else{
            ans = max(ans,temp);
            temp = 1;
        }
    }
    ans = max(ans,temp);
    cout << ans << endl;
	return 0;
}