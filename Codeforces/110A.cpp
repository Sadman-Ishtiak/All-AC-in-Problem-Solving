#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;
    bool flag = true;
    int count = 0;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == '4' || s[i] == '7') count++;
        else flag = false;
    }
    if(count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
	return 0;
}
