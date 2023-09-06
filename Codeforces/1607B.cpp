#include <bits/stdc++.h>
#define ll int long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b;
        c = b % 4;
        if(c == 1) c = b;
        if(c == 2) c = -1;
        if(c == 3) c = -b -1;
        if(a % 2 == 0) a -= c;
        else a += c;
        cout << a << endl;
    }
	return 0;
}