#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string l1,l2,l3,t;
    cin >> l1 >> l2 >> l3 ;
    reverse(l1.begin(),l1.end());
    t = l2;
    reverse(l2.begin(), l2.end());
    if(l1==l3 && l2==t)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
