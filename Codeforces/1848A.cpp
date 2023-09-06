#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >> b >> n;
        int cx,cy;
        cin >> cx >> cy;
        bool flag = true;
        for (int i = 0; i < n; i++){
            int x,y;
            cin >> x >> y;
            if((x+y)%2 == (cx+cy)%2) flag = false;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;        
    }
    return 0;
}