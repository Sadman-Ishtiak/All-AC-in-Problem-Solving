#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        double n;
        cin >> n;
        if(n < 1500) printf("%.2f\n", 2*n);
        else printf("%.2f\n", 0.98*n+n+500);
    }
	return 0;
}