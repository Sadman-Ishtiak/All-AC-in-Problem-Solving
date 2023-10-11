#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    string s;
    cin >> s;
    unordered_set<char>vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0, temp = 0;
    for (int i = 0; i < s.length(); i++){
        if(vowels.find(s[i]) != vowels.end()) temp++;
        else temp = 0;
        count = max(count, temp);
    }
    if(count >= 3) cout << "Happy" << endl;
    else cout << "Sad" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}