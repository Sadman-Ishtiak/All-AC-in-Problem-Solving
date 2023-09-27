#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k, x;
        cin >> n >> k >> x;
        ll min = k*(k+1)/2;
        k = n-k;
        ll max = n*(n+1)/2 - k*(k+1)/2;
        if(x < min || x > max) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}