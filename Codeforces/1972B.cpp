#include<bits/stdc++.h>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

using namespace std;

void solve(){
    int n;
    cin >> n;
    int u = 0, d = 0;
    for (int i = 0; i < n; i++){
        char c;
        cin >> c;
        if (c == 'U') u++;
        else d++;
    }
    if (u % 2) YES;
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