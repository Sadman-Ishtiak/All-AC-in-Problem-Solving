#include <bits/stdc++.h>
#define ll long long
#define float long double
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    a[n-1] = n;
    a[0] = n-1;
    a[1] = n-2;
    for (int i = 2; i < n-1; i++){
        a[i] = i-1;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
