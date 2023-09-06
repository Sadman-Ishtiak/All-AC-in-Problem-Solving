#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    bool box[100][100] = {false};
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for (int i = a; i < b; i++){
            for (int j = c; j < d; j++){
                box[i][j] = true;
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            if(box[i][j] == true) ans++;
        }
    }
    cout << ans << endl;
	return 0;
}
