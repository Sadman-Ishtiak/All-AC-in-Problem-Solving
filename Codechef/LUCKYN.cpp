#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int s;
        cin >> s;
        while(s > 0){
            if(s%10 == 7) break;
            s=s/10;
        }
        if(s == 0)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
	return 0;
}