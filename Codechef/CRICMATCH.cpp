#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int run,over;
        cin >> run >> over ;
        if(over*36 >= run ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}