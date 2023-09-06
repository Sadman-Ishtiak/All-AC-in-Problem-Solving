#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    int b = max(x,y);
    if(b==1)
        cout << "1/1" << endl;
    else if(b==2)
        cout << "5/6" << endl;
    else if(b==3)
        cout << "2/3" << endl;
    else if(b==4)
        cout << "1/2" << endl;
    else if(b==5)
        cout << "1/3" << endl;
    else
        cout << "1/6" << endl;
    return 0;
}
