#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        char a;
        cin >> a;
        if(a == 'b' || a == 'B') cout << "BattleShip" << endl;
        else if(a == 'c' || a == 'C') cout << "Cruiser" << endl;
        else if(a == 'd' || a == 'D') cout << "Destroyer" << endl;
        else cout << "Frigate" << endl;
    }
	return 0;
}