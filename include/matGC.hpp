#ifndef MAT_GC_HPP_
#define MAT_GC_HPP_

class Vec_dat{
    // vec[num]
    int * vec;                 
    int num;
    // Max sub_vector in father_vector
    // from vec[start_ptr] to vec[end_ptr].
    int start_ptr, end_ptr;
    int max_sum;

    // Get Vector.
    Vec_dat(int num_);
    ~Vec_dat();
    // Input data to Vector.
    void inputVec();
    // Calculate Max sum and two ptr
    void calMax();
};

#endif