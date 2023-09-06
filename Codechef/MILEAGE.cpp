#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        double n,x,y,a,b;
        cin >> n >> x >> y >> a >> b;
        double petrol = (n/a)*x;
        double disel = (n/b)*y;
        if(petrol < disel) cout << "PETROL" << endl;
        else if(disel < petrol) cout << "DIESEL" << endl;
        else cout << "ANY" << endl;
    }
	return 0;
}