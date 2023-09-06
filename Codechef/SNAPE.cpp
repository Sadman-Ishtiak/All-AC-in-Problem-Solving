#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float a,b;
        cin >> a >> b;
        cout << sqrt(b*b-a*a) << " " << sqrt(b*b+a*a) << endl;
    }
	return 0;
}