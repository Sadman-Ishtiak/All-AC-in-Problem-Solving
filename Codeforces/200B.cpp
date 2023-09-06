#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        sum += t;
    }
    printf("%.12f", (float)sum/n);
    return 0;
}