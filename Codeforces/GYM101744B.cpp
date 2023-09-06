#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
    }
    int ans = 0;
    while (n !=0)
    {
        ans++;
        n = n>>1;
    }
    
    cout << ans ;
}