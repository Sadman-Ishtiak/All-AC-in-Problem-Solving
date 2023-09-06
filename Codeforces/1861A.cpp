#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == '1') cout << 13;
        else if(s[0] == '2') cout << 23;
        else if(s[0] == '3') cout << 37;
        else if(s[0] == '4') cout << 41;
        else if(s[0] == '5') cout << 53;
        else if(s[0] == '6') cout << 61;
        else if(s[0] == '7') cout << 79;
        else if(s[0] == '8') cout << 83;
        else cout << 97;
        cout << endl;
    }
	return 0;
}
