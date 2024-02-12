#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, a = 0;
    cin >> n;
    vector<char>s(n);
    multiset<char>scm;
    set<char>sc;
    for (int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] != s[i-1]) a++;
    }
    unique(s.begin(), s.end());
    for(int i = 0; i < a; i++) {sc.insert(s[i]); scm.insert(s[i]); }
    if(sc.size() == scm.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int n;
    cin >> n;
    while (n--)
        solve();
    
    return 0;
}