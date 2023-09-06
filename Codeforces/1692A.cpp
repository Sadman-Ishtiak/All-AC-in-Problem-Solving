#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if(a < b) ans++;
        if(a < c) ans++;
        if(a < d) ans++;
        cout << ans << endl;
    }
    return 0;
}