#include "matGC.hpp"
#include <iostream>
#include <cmath>

int Vec_dat::num = 0;
int Mat_dat::num = 0;

Vec_dat::Vec_dat(){
    vec = new int[num];
}

Vec_dat::~Vec_dat(){
    delete vec;
}

void Vec_dat::inputVec(){
    for(int i = 0; i < num; i++)
        std::cin >> vec[i];
    calMax();
    return;
}

void Vec_dat::calMax(){
    int max_sum_ = 0;
    int start_ptr_ = 0;
    max_sum = vec[0];
    start_ptr = end_ptr = 0;
    for(int i = 0; i < num; i++){
        max_sum_ += vec[i];
        if(max_sum_ > max_sum){
            start_ptr =start_ptr_;
            end_ptr = i;
            max_sum = max_sum_;
        }

        if(max_sum_ < 0){
            start_ptr_ = i+1;
            max_sum_ = 0;
        }
    }
}

void Vec_dat::printVec(){
    for(int i = 0; i < num; i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

int Vec_dat::getNum(){
    return num;
}

int Vec_dat::getStartPtr(){
    return start_ptr;
}

int Vec_dat::getEndPtr(){
    return end_ptr;
}

int Vec_dat::getMaxSum(){
    return max_sum;
}

void Vec_dat::setNum(int num_){
    Vec_dat::num = num_;
}

void Vec_dat::add(const Vec_dat& vd_1, const Vec_dat& vd_2, Vec_dat& vd_new, bool isCal){
    for(int i = 0; i < Vec_dat::num; i++){
        vd_new.vec[i] = vd_1.vec[i] + vd_2.vec[i];
    }

    if(isCal)
        vd_new.calMax();

    return;
}

Mat_dat::Mat_dat(){
    num = Vec_dat::getNum();
    mat = new Vec_dat[num];
}