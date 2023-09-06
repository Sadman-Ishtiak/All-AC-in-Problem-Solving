#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1;
        s2 = s1;
        reverse(s1.begin(),s1.end());
        // cout << s1 << " " << s2 << endl;
        if(s1==s2) cout << "wins" << endl;
        else cout << "loses" << endl;
    }
	return 0;
}