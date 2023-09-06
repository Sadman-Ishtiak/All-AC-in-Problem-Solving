#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b;
        cin >> a >> b;
        long long int c = __gcd(a,b);
        if(c == 1) cout << "Nao" << endl;
        else cout << "Sim" << endl;
    }
    return 0;
}