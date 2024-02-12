#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int car, outlet, hour;
        cin >> car >> outlet >> hour ;
        int battery[car];
        for (int i = 0; i < car; i++) {
            cin >> battery[i];
        }
        int power[outlet];
        for (int i = 0; i < outlet; i++) {
            cin >> power[i];
        }
        sort(battery, battery+car, greater<int>());
        sort(power, power+outlet, greater<int>());
        int ans = 0;
        for(int i=0;i<min(car,outlet);i++)
            ans = ans + min(battery[i],(power[i]*hour));
        cout << ans << endl;
    }
	return 0;
}
