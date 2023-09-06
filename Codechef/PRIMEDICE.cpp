#include <bits/stdc++.h>
using namespace std;

bool isprime(int a){
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(a%i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(isprime(a+b)) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
	return 0;
}