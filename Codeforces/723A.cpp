#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve(){
    
}
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 1000;
    for (int i = 0; i <= 100; i++)
    {
        ans = min(ans, abs(i-a) + abs(i-b) + abs(i-c));
    }
    
    cout << ans;
	return 0;
}