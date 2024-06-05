#include<bits/stdc++.h>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if(a<c && c<b && b<d) YES;
    else if(c<a && a<d && d<b) YES;
    else NO;
}

int main(){
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}