#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int solve(){
    ll n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 1000; i++){
        if(n == 1) return i;
        else if(n % 6 == 0) n /= 6;
        else n*= 2;
    }
    return -1;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
	return 0;
}