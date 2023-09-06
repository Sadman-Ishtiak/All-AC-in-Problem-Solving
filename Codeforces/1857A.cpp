#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(temp % 2 == 1) odd++;
            else even++;
        }
        if(odd % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}