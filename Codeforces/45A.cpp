#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n,code;
    cin >> n;
    vector<string>names {"January","February","March","April","May","June","July","August","September","October","November","December"};
    for (int i = 0; i < 12; i++){
        if(names[i] == s) code = i;
    }
    cout << names[(code+n)%12] ;
    return 0;
}