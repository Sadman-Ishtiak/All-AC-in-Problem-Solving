#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,k;
        cin >> n >> k;
        if(k == 1) cout << "YES" << endl;
        else if(n % 2 == 0) cout << "YES" << endl;
        else if(n >= k){
            if(n==k) cout << "YES" << endl;
            else if((n-k)%2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}