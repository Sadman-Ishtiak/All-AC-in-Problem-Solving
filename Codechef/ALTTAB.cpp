#include<bits/stdc++.h>
using namespace std;
void printLastTwoLetters(const string& str) {
    if(str.length()>0)
        cout << str.substr(str.length() - 2) <<"";
}


int main() {
    int n;
    cin >> n;
    string s[n];
    set<string>ss;
    for (int i = 0; i < n; i++){
        cin >> s[i];
        ss.insert(s[i]);
    }
    for (int i = n-1; i >= 0; i--){
        if(ss.find(s[i]) != ss.end()){
            ss.erase(s[i]);
            printLastTwoLetters(s[i]);
        }
    }
    
	return 0;
}
