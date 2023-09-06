#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char s[n];
        cin >> s;
        for (int i = 1; i < n; i+=2)
        {
            if(s[i-1] == '0' && s[i] == '0') cout << "A";
            if(s[i-1] == '0' && s[i] == '1') cout << "T";
            if(s[i-1] == '1' && s[i] == '0') cout << "C";
            if(s[i-1] == '1' && s[i] == '1') cout << "G";
        }
        cout << endl;
    }
	return 0;
}