#include<bits/stdc++.h>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

using namespace std;

void solve(){
    double m,k,n;
    cin >> n >> m >> k;
    if (n-ceil(n/m) > k) YES;
    else NO;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}