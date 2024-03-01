#include<bits/stdc++.h>

using namespace std;

bool isprime(int n){
    for (int i = 2; i < n; i++){
        if(n%i == 0) return false;
    }
    return true;
}


int main(){
    int n,m;
    cin >> n >> m;
    if(!isprime(n) || !isprime(m)){
        cout << "NO" << endl;
    } else{
        for (int i = n+1; i < m; i++){
            if(isprime(i)){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}