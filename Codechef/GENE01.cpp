#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    char a,b,ans;
    cin >> a >> b;
    if(a == 'R' || b == 'R') ans = 'R';
    else if(a == 'B' || b == 'B') ans = 'B';
    else ans = 'G';
    cout << ans;
	return 0;
}