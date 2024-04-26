#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b && b < c) cout << "STAIR" << endl;
    else if(b > a && b > c) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
}

int main(){
    int k;
    cin >> k;
    while(k--)
        solve();
    return 0;
}
