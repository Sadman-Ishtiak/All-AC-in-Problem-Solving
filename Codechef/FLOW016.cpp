#include <bits/stdc++.h>
using namespace std;

int cal(int a, int b){
    if (b == 0)
        return a;
    else
        return cal(b, a % b);
}


int main() {
    int t;
    cin >> t;
    while(t--){
        long long int a,b,gcd,lcm;
        cin >> a >> b;
        gcd = cal(a,b);
        lcm = a*b/gcd;
        cout << gcd << " " << lcm << endl;
    }
	return 0;
}