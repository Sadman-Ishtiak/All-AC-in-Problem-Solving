#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char s[n+1] = {'\0'};
        cin >> s;
        bool flag = true;
        for (int i = 0; i < n-2; i++){
            if(s[i] == '1' && flag){
                cout << s[i];
                flag = false;
            }
            else cout << 0;
        }
        if(flag) cout << s[n-2] << s[n-1] << endl;
        else cout << "00" << endl;
    }
	return 0;
}