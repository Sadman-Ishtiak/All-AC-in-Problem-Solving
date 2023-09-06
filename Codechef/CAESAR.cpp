#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char s[n+1],t[n+1], in[n+1],ans[n+1];
        cin >> s >> t >> in;
        int k =(t[0] - s[0] + 26)%26;
        for (int i = 0; i < n; i++)
        {
            if(in[i] + k <= 'z') ans[i] = in[i] + k;
            else ans[i] = in[i] + k - 26;
        }
        ans[n] = '\0';
        cout << ans << endl;
    }
	return 0;
}