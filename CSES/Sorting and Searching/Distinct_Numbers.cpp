#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    std::set<int>nums;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        nums.insert(tmp);
    }
    cout << nums.size();
    return 0;
}