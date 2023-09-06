#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    unordered_set<string>s;
    while(t--){
        string name;
        cin >> name;
        if(s.find(name) != s.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
        s.insert(name);
    }
    return 0;
}