#include<bits/stdc++.h>
using namespace std;
bool checkhello(char *s){
    char *p;
    p = strstr(s,"h");
    if(p == nullptr) return false;
    p = p+1;
    p = strstr(p,"e");
    if(p == nullptr) return false;
    p = p+1;
    p = strstr(p,"l");
    if(p == nullptr) return false;
    p = p+1;
    p = strstr(p,"l");
    if(p == nullptr) return false;
    p = p+1;
    p = strstr(p,"o");
    if(p == nullptr) return false;
    return true;
}
int main(){
    char s[100];
    cin >> s;
    if(checkhello(s)) cout << "YES";
    else cout << "NO";
    return 0;
}