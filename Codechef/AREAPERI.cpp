#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int a,b,are,peri;
    cin >> a;
    cin >> b;
    are = a*b;
    peri = (a+b)*2;
    if(are > peri) cout << "Area\n" << are;
    else if(are < peri) cout << "Peri\n" << peri;
    else cout << "Eq\n" << are;
	return 0;
}