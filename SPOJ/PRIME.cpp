#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		for(int i = max(a,2); i <= b; i++){
			bool flag = true;
			for(int j = 2; j <= sqrt(i); j++){
				if(i%j == 0){
					flag = false;
					break;
				}
			}
			if(flag) cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}