#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        float n,m,k;
        cin >> n >> m >> k;
        cout << ceil(n/(m*k)) << endl;
    }
	return 0;
}