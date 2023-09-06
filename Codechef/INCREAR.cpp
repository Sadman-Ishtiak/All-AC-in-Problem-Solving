#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,ans;
        cin >> x >> y;
        if(x<y) ans = y-x;
        else if (x > y){
            if(x%2 == y%2) ans = (x-y)/2;
            else {
                ans = (x-y+1)/2+1;
            }
        }
        else ans = 0;
        cout << ans << endl;
    }
	return 0;
}