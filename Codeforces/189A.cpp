#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) x.begin(),x.end()
using namespace std;



int solve(int n, vector<int>a){
}
int main() {
    int n;
    vector<int>a(3);
    cin >> n >> a[0] >> a[2] >> a[1];
    sort(all(a));
    int out = 0;
    for (int i = 0; i <= n/a[2]; i++){
        for (int j = 0; j <= (n-a[2]*i)/a[1]; j++){
            int k = a[2]*i + a[1]*j;
            int ans = (n-k)/a[0];
            if(ans*a[0] + i*a[2] + j*a[1] == n){
                out = max(out, i+j+ans);
            }
        }
    }
    cout << out;
	return 0;
}