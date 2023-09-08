#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    string s1,s2;
    for (int i = 0; i < n; i++){
        cin >> s1;
        if(s1!=s2) ans++;
        s2 = s1;
    }
    cout << ans;
	return 0;
}
