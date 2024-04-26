#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve(){
    int a, b, x;
    scanf("%d:%d", &a, &b);
    x = (a>12)?a-12:a;
    if(x==0) x = 12;
    if(x < 10) cout << 0;
    cout << x << ":";
    if(b<10) cout << 0;
    cout << b;
    if(a>=12) cout << " PM";
    else cout << " AM";
    cout << endl;
}

int main(){
    int k;
    cin >> k;
    while(k--)
        solve();
    return 0;
}
