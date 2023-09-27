#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(int t){
    ll n;
    cin >> n;
    ll x=0,y=0;
    ll a = sqrt(n);
    if(a*a == n) {
        if(n%2 == 0){
            x = a;
            y = 1;
        } else{
            x = 1;
            y = a;
        }
    } else{
        a++;
        x = a;
        y = a;
        ll flag = a*a-(a-1);
        if(a%2 == 1){
            x -= max(n-flag,0LL);
            y -= max(flag-n,0LL);
        } else {
            x -= max(flag-n,0LL);
            y -= max(n-flag,0LL);
        }
    }
    cout << "Case " << t << ": " << x << " " << y << endl;
}

int main(){
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++){
        solve(k);
    }
}