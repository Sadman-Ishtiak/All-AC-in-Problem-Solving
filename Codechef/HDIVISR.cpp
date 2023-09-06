#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 10; i > 0; i--){
        if(t%i == 0){cout << i; break;}
    }
	return 0;
}