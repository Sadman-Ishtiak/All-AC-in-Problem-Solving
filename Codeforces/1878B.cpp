#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a1=1,a2=3,a3=3;
        while(n--){
            cout << a1 << " ";
            while(((3*a3)%(a1+a2) == 0) || a2 == a3) a3++;
            a1 = a2;
            a2 = a3;
        }
        cout << "\n";
    }
    return 0;
}