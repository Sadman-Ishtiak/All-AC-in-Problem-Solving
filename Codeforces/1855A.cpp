#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++)
            cin >> p[i];
        float count = 0;
        for (int i = 0; i < n; i++)
        {
            if(p[i] == i+1) count++;
        }
        
        cout << ceil(count/2) << endl;
    }
	return 0;
}
