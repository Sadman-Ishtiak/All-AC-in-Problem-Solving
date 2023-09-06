#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,avg;
        cin >> n >> avg;
        ll sum = 0;
        for (int i = 1; i < n; i++){
            ll temp;
            cin >> temp;
            sum += temp;
        }
        cout << max((avg*n)-sum,0LL) << endl;
    }
	return 0;
}