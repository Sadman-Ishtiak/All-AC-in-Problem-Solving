#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        int m = 0,ans;
        for (int i = 0; i < n; i++)
        {
            if(a[i] <= 10){
                if(b[i] > m){
                    m = b[i];
                    ans = i;
                }
            }
        }
        cout << ans+1 << endl;
    }
    return 0;
}