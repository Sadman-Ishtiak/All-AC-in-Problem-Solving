#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = 0, b = 0;
        while(n--){
            string s;
            cin >> s;
            if(s == "START38") a++;
            else b++;
        }
        cout << a << " " << b << endl;
    }
	return 0;
}