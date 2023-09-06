#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int a,b;
    cin >> a>> b;
    if(a<b) cout << "old";
    else if(b<a) cout << "new";
    else cout << "same";
	return 0;
}