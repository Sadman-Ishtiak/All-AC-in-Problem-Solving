#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n,a,x,b,y;
    cin >> n >> a >> x >> b >> y;
    while ((a!=b)&&(a!=x)&&(b!=y))
    {
        a++;
        if(a>n) a-=n;
        b--;
        if(b<1) b+=n;
    }
    if(a==b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}