#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        int ans = INT32_MAX;
        cin >> a >> b >> c;
        for (int i = a-1; i <= a+1; i++){
            for (int j = b-1; j <= b+1; j++){
                for(int k = c-1; k <= c+1; k++){
                    ans = min(ans, abs(i-j) + abs(i-k) + abs(j-k));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}