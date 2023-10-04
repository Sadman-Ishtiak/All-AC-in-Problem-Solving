#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    int h,c,n,t;
    cin >> t >> c;
    h = t-c;
    n= h + 2*c;
    if(h == 0) n--;
    cout << n << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}