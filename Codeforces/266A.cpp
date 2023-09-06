#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,count = 0;
    cin >> t;
    char x,y = '0';
    while(t--){
        cin >> x;
        if(x == y) count++;
        y = x;
    }
    cout << count ;
	return 0;
}