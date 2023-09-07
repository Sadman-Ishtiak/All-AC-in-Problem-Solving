#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(b > a*m) cout << n*a;
    else{
        if(n%m == 0) cout << (n/m)*b;
        else cout << min(floor(n/m)*b+(n%m)*a,floor((n+m)/m)*b);
    }
	return 0;
}
