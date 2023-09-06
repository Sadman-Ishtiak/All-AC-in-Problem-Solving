#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;
        vector<int>a(n);
        a[0] = x;
        a[n-1] = y;
        bool flag = true;
        if((((n-1)*(n))/2) <= (y-x)){
            int j = 1;
            for (int i = n-2; i > 0; i--){
                a[i] = a[i+1] - j;
                j++;
            }
            
        }
        else flag = false;
        if(flag)for (int i = 0; i < n; i++) cout << a[i] << " ";
        else cout << -1;
        cout << "\n";
    }
	return 0;
}
