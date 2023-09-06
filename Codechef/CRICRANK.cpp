#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a[3],b[3];
        cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
        int A = 0, B = 0;
        for (int i = 0; i < 3; i++)
        {
            if(a[i] > b[i]) A++;
            else B++;
        }
        if(A>B) cout << "A" << endl;
        else cout << "B" << endl;
    }
	return 0;
}