#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,i;
    cin>>a>>b; 
    for(i=1;i!=0;i++)
    {
        a=a*3;
        b=b*2;
        c++;
        if(a>b){
            cout<<c<<endl;
            break;
        }
    }
    return 0;
}