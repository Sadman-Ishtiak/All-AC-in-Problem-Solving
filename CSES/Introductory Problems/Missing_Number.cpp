#include<iostream>
 
using namespace std;
int main()
{
    long long int n,sum = 0,check;
    cin >> n;
    for(int i=0;i<n-1;i++)
    {
        cin >> check;
        sum = sum + check;
    }
    check = n* (n +1) / 2;
    cout << check - sum;
    return 0;
}