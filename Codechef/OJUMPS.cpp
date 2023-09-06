#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    t = t % 6;
    if(t == 0 || t == 1 || t == 3) cout << "yes";
    else cout << "no";
	return 0;
}