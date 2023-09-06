#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, even = 0, odd = 0,ep,op;
    cin >> n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(nums[i] %2 == 0){
            even++;
            ep = i+1;
        }
        else{
            odd++;
            op = i+1;
        }
    }
    if(even == 1) cout << ep;
    if(odd == 1) cout << op;
    return 0;
}