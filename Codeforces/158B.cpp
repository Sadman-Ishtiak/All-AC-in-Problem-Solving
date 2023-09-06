#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    float one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t == 1) one++;
        if(t == 2) two++;
        if(t == 3) three++;
        if(t == 4) four++;
    }
    int ans;
    ans = four;
    if(three >= one) one = 0;
    else one = one - three;
    ans += three;
    ans += ceil(two/2);
    if((int)two % 2 == 1 && one == 1){
        one = 0;
    }
    if((int)two % 2 == 1 && one >= 2){
        one -= 2;
    }
    ans += ceil(one / 4); 
    cout << ans << endl;
    return 0;
}