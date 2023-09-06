#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        int ans = 0,temp = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 0) temp++;
            else temp = 0;
            ans = max(ans,temp);
        }
        cout << ans << endl;
    }
    return 0;
}