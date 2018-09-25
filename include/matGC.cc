#include "matGC.hpp"
#include <iostream>

int** getMat(int num){
    int **m = new int*[num];
    for(int i = 0; i < num; i++)
        m[i] = new int[num];
    
    return m;
}

void inputMat(int **mat, int num){
    for(int i = 0; i < num; i++)
        for(int j = 0; j < num; j++)
            std::cin >> mat[i][j];
    
    return;
}