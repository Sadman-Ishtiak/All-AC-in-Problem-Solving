#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if((i+j)&1) cout << "..";
            else cout << "##";
        }
        cout << endl;
        for (int j = 0; j < n; j++) {
            if((i+j)&1) cout << "..";
            else cout << "##";
        }
        cout << endl;
    }
}

int main(){
    int k;
    cin >> k;
    while(k--)
        solve();
    return 0;
}
