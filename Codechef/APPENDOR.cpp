#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, o = 0 ;
        cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        o = o|temp;
    }
    int ans = (k^o);
    if((ans|k)>k) cout << -1 << endl;
    else cout << ans << endl;
    }
	return 0;
}