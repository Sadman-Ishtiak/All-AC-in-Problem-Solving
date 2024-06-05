#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s, x;
    cin >> s;
    x = s;
    bool ans = next_permutation(s.begin(), s.end());
    if (ans || x!=s){
        cout << "YES" << endl;
        cout << s << endl;
    } else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}