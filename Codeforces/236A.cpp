#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cin >> name;
    int n = name.length();
    set<char>c;
    for (int i = 0; i < n; i++)
    {
        c.insert(name[i]);
    }
    if(c.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!" ;
	return 0;
}
