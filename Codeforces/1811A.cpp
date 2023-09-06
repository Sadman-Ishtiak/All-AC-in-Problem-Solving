#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        char s[n+1];
        scanf("%s", s);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(s[i] - '0' >= k) cout << s[i];
            else{
                if(flag) cout << k;
                flag = false;
                cout << s[i];
            }
        }
        if(flag) cout << k;
        cout << endl;
    }
}