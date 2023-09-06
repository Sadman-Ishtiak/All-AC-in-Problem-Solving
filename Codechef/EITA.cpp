#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << max(7*b, a*c+(7-a)*d) << endl;
    }
	return 0;
}