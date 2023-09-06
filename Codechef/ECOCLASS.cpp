#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int s[n],d[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            cin >> d[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == d[i]) ans++;
        }
        
        cout << ans << endl;
    }
	return 0;
}