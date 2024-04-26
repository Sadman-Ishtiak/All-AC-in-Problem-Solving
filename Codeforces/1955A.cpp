#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve(){
    int a,b,n;
    cin >> n >> a >> b;
    cout << min(n*a, (n%2)*a+b*(n/2)) << endl;
}

int main(){
    int k;
    cin >> k;
    while(k--)
        solve();
    return 0;
}
