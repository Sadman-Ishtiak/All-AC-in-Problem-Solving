#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int evens = 0, odds = 0, stupid = 0;
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        if(k%2 != i%2) stupid++;
        odds += k%2;
    }
    evens = n-odds;
    if(odds == n/2 && stupid %2 == 0) cout << stupid/2 << endl;
    else cout << -1 << endl;
}

int main(){
    int n;
    cin >> n;
    while (n--)
        solve();
    
    return 0;
}