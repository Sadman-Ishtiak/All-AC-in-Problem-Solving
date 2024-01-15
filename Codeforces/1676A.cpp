#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n, s1 = 0, s2 = 0;
    cin >> n;
    for (int i = 0; i < 3; i++){
        s1 += n%10;
        n /= 10;
    }
    for (int i = 0; i < 3; i++){
        s2 += n%10;
        n /= 10;
    }
    if(s1 == s2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}