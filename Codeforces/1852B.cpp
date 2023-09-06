#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ones = 0, zeros = 0, i = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == 0) zeros++;
            if(a[i] == 1) ones++;
        }
        long long int total = (1ll << zeros) * ones;
        printf("%lli\n", total);
    }
    return 0;
}