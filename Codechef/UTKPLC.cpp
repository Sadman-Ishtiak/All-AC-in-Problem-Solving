#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    char pr[3],ac[2];
    cin >> pr[0] >> pr[1] >> pr[2];
    cin >> ac[0] >> ac[1];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if(pr[i] == ac[j]){
                cout << pr[i] << endl;
                return;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
	return 0;
}
