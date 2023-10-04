#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019) cout << "HOSTED" << endl;
    else cout << "NOT HOSTED" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}