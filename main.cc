#include <iostream>
#include "include/matGC.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    freopen("../input.txt", "r", stdin);

    cin >> num;
    Vec_dat::setNum(num);

    Vec_dat tmpVec;

    Vec_dat *vecLine = new Vec_dat[Vec_dat::getNum()];
    for(int i = 0; i < Vec_dat::getNum(); i++)
        vecLine[i].inputVec();

    for(int i = 0; i < Vec_dat::getNum(); i++)
        vecLine[i].printVec();
    
    return 0;
}
