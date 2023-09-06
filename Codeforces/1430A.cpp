#include<iostream>
#include<algorithm>
using namespace std;


int solve(int n){
    for (int i = 0; i <= n/7; i++){
        for (int j = 0; j <= n/5; j++){
            for (int k = 0; k <= n/3; k++){
                if (i*7+j*5+k*3 == n){
                    cout << k << " " << j << " " << i << endl;
                    return 0;
                }
            }
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = solve(n);
        if (flag == 1)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}