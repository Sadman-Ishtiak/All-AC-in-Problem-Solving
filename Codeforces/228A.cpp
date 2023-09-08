#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    set<int>c;
    for (int i = 0; i < 4; i++){
        int t;
        cin >> t;
        c.insert(t);
    }
    cout << 4-c.size();
	return 0;
}
