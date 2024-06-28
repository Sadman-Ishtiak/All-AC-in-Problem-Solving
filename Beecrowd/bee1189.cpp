#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double N[12][12] = {0};
    char p;
    double soma = 0.0;

    cin >> p;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> N[i][j];
            if(i > j && 11-i > j){
                // cout << j << " ";
                soma += N[i][j];
            }
        }
        // cout << endl;
    }

    if(p == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/66.0);
    return 0;
}