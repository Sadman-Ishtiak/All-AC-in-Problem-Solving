#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a<b){
            int temp = b;
            b = a;
            a = temp;
        }
        while (a > b)
            b = b<<1;
        // cout << a << " " << b << endl;
        if(a == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}