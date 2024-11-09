#include<iostream>
 
using namespace std;
int main()
{
    long long int k, ans = 0, i;
    cin >> k;
    long long int n[k];
    for(i = 0; i < k; i++)
        cin >> n[i];
    for(i=1; i<k; i++)
    {
        if(n[i-1]>n[i])
        {
            ans += n[i-1]-n[i];
            n[i] = n[i -1];
        }
    }
    cout << ans << endl;
    return 0;
}