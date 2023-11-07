#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;


void solve(){
    
}
int main() {
    ll price, coin, ans = 0;
    cin >> price >> coin;
    for (int i = 1; i < 10; i++){
        if((price * i) % 10 == coin || (price * i) % 10 == 0){
            cout << i;
            return 0;
        }
    }
    cout << 10;
	return 0;
}