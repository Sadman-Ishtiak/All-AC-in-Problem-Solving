#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s.find("H") <= s.length() || s.find("Q") <= s.length() || s.find("9") <= s.length()) cout << "YES";
    else cout << "NO";
	return 0;
}
