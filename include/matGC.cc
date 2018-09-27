#include "matGC.hpp"
#include <iostream>

Vec_dat::Vec_dat(int num_){
    vec = new int[num_];
    num = num_;
}

Vec_dat::~Vec_dat(){
    delete vec;
}

void Vec_dat::inputVec(){
    for(int i = 0; i < num; i++)
        std::cin >> vec[i];
    return;
}

void Vec_dat::calMax(){
    int *left_list = new int[num];
    int *right_list = new int[num];

    /*          The methon of getting min sub_vec:
     * The set the vector summer is all_sum, cut the vector in
     * vec[start_ptr] and vec[end_ptr], and the sub_vec summer
     * is:
     * 
     * sub_vec_sum = all_sum - (vec[0:start_ptr-1]+vec[end_ptr+1:num-1])
     * 
     * From the function, we can easy see that the all_sum is const, and
     * when we get the min of (vec[0:start_ptr-1]+vec[end_ptr+1:num-1]),
     * we can get the max of sub_vec_sum.
     */

    int sum = 0;
    for(int i = 0; i < num; i++){
        left_list[i] = sum;
        sum += vec[i];
    }

    sum = 0;
    for(int i = num-1; i >= 0; i--){
        right_list[i] = sum;
        sum += vec[i];
    }

    int min = left_list[0] + right_list[num-1];
    start_ptr = 0, end_ptr = num-1;
    for(int s = 0; s < num; s++){
        for(int e = num-1; e >= s; e--){
            if(left_list[s]+right_list[e] < min){
                min = left_list[s] + right_list[e];
                start_ptr = s;
                end_ptr = e;
            }
        }
    }

    sum = 0;
    for(int i = start_ptr; i <= end_ptr; i++)
        sum += vec[i];
    
    max_sum = sum;

    delete left_list, right_list;
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

void Vec_dat::setStartPtr(int p_){
    start_ptr = p_;
    return;
}

void Vec_dat::setEndPtr(int p_){
    end_ptr = p_;
    return;
}

void Vec_dat::setMaxSum(int sum_){
    max_sum = sum_;
    return;
}