#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cin >> s;
    int len = 0, upper = 0, lower = 0;
    while (s[len] != '\0'){
        if(isupper(s[len])) upper++;
        else lower++;
        len++;
    }
    if(upper > lower){
        for (int i = 0; i < len; i++)
            s[i] = toupper(s[i]);
    } else{
        for (int i = 0; i < len; i++)
            s[i] = tolower(s[i]);
    }
    cout << s;
    return 0;
}