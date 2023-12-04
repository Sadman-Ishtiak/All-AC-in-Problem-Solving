#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = n-1; i >= 0; i--){
        if(a[i] < x){
            cout << i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}