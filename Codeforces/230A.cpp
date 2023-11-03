#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main() {
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>>dragon(n);
    for (int i = 0; i < n; i++){
        cin >> dragon[i].first >> dragon[i].second ;
    }
    bool flag = true;
    sort(dragon.begin(), dragon.end());
    for(auto i : dragon){
        if(s > i.first) s += i.second;
        else{
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
	return 0;
}