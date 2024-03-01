#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s.length() %2 == 1){
        cout << "NO" << endl;
        return;
    } else{
        int n = s.length()/2;
        for (int i = 0; i < n; i++){
            if(s[i] != s[i+n]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}