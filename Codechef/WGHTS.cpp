#include <bits/stdc++.h>
using namespace std;

bool check(int w, int x, int y, int z)
{
    if(w == x || w == y || w == z) return true;
    else if(w == (x+y) || w == (y+z) || w == (x+z)) return true;
    else if(w == (x+y+z)) return true;
    else return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int w,x,y,z;
        cin >> w >> x >> y >> z;
        if(check(w,x,y,z)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}