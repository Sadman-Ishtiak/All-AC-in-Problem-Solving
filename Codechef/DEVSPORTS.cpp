#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if(a-b >= c+d+e) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}