#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    
}
int main() {
    int t;
    cin >> t;
    int a[t], ans = 0, counter = 0;
    for (int i = 0; i < t; i++){
        cin >> a[i];
        if(a[i] > 0) counter += a[i];
        else{
            counter += a[i];
            ans = min(ans, counter);
        }
    }
    cout << ans*(-1) << endl;
	return 0;
}