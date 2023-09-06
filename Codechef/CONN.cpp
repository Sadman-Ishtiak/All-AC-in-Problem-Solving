#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0) cout << "YES" << endl;
        else{
            if(n>= 7) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
	return 0;
}