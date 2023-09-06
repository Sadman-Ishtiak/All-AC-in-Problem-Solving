#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], twos = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 2) twos++;
        }
        if(twos % 2 == 1) cout << -1 << endl;
        else{
            int ans,count = 0;
            for (int i = 0; i < n; i++){
                if(a[i] == 2) count++;
                if(count == twos/2){
                    ans = i+1;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}