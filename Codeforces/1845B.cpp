#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    int ax,ay,bx,by,cx,cy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    int ans = 0;
    // Solving area
    int ab = abs(ax-bx) + abs(ay-by);
    int bc = abs(bx-cx) + abs(by-cy);
    int ac = abs(ax-cx) + abs(ay-cy);
    ans = (ab+ac-bc)/2+1;
    // Printing answer
    cout << ans << endl;
    }
    return 0;
}
    