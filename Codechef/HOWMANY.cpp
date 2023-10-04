#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    
}
int main() {
    int t, ans = 0;
    cin >> t;
    while(t != 0){
        ans++;
        t /= 10;
    }
    if(ans <= 3)cout << ans;
    else cout << "More than 3 digits";
	return 0;
}