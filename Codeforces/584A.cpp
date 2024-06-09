#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a == 1 && b == 10) cout << -1;
    else {
        cout << b;
        do
        {
            a--;
        } while (b/=10);
        
        for (int i = 0; i < a; i++)
        {
            cout << 0;
        }
    }
    return 0;
}