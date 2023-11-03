#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    
}
int main() {
    int n , k ;
    cin >> n >> k;
    int t = 240 - k;
    for (int i = 1; i <= n; i++){
        t = t - (5*i);
        if(t < 0){
            cout << i-1 << endl;
            return 0;
        }
    }
    cout << n << endl;
	return 0;
}