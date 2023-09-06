#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e,f;
        cin >> a >> b >> c >> d >> e >> f;
        if((a+b+c- min({a,b,c})) > d+e+f-min({d,e,f})) cout << "Alice" << endl;
        else if((a+b+c- min({a,b,c})) < d+e+f-min({d,e,f})) cout << "Bob" << endl;
        else cout << "Tie" << endl;
    }
	return 0;
}