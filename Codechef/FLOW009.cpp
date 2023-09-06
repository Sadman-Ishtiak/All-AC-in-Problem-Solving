#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cout << setprecision(6) << fixed;
    int t;
    cin >> t;
    while(t--){
        double a,b;
        cin >> a >> b;
        if(a > 1000) cout << a*b*.9 << endl;
        else cout << a*b << endl;
    }
	return 0;
}