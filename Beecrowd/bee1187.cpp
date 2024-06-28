#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double N[12][12];
    char c;
    double x = 0.0;
    
    cin >> c;
    
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> N[i][j];
            if(j > i && (j+i) < 11){
                 x += N[i][j];
            }
        }
    }
    if(c == 'S') printf("%.1f\n", x);
    else printf("%.1f\n", x/30.0);
    return 0;
}