#ifndef MAT_GC_HPP_
#define MAT_GC_HPP_

class Vec_dat{
    private:
    // vec[num]
    int * vec;                 
    int num;
    // Max sub_vector in father_vector
    // from vec[start_ptr] to vec[end_ptr].
    int start_ptr, end_ptr;
    int max_sum;

    public:
    // Get Vector.
    Vec_dat(int num_);
    ~Vec_dat();
    // Input data to Vector.
    void inputVec();
    // Calculate Max sum and two ptr
    void calMax();
    // Print Vector
    void printVec();
    // Get the private variable
    int getNum();
    int getStartPtr();
    int getEndPtr();
    int getMaxSum();
    // Set the private variable
    void setStartPtr(int p_);
    void setEndPtr(int p_);
    void setMaxSum(int sum_);
    void setVec(int *vc);
    // Operator
    Vec_dat operator+(Vec_dat vd);
};

#endif