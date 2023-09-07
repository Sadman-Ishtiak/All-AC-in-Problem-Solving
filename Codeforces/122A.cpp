#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    if(t%4 == 0 || t%7 == 0 || t%47 == 0 || t%74 == 0) cout << "YES";
    else if(t == 444 || t == 447 || t == 474 || t == 477 || t == 744 || t == 747 || t == 777) cout << "YES";
    else cout << "NO";
	return 0;
}