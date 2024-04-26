#include<bits/stdc++.h>
using namespace std;

set<long double> answers;

void solve(){
    int n;
    cin >> n;
    if(360%(180-n)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int k;
    cin >> k;
    while(k--)
        solve();
    return 0;
}
