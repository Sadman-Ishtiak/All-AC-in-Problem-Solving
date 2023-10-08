#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

bool solve(){
    int n,t, c = 0;
    bool flag = false;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        if(t < 0) c++;
        if(t == 0) flag = true;
    }
    if(c%2 == 0 || flag) flag = true;
    else flag = false;
    return flag;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        if(solve()) cout << 0 << endl;
        else cout << 1 << endl;
    }
	return 0;
}