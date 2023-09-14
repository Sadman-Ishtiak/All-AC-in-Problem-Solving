#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << (n-2) << " " << 1 << " " << 1 << endl;
        }
        else cout << 1 << " " << (n-1)/2 << " " << (n-1)/2 << endl;
    }
	return 0;
}