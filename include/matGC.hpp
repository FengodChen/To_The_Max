#ifndef MAT_GC_HPP_
#define MAT_GC_HPP_

class Vec_dat{
    private:
    // vec[num]
    int * vec;                 
    static int num;
    // Max sub_vector in father_vector
    // from vec[start_ptr] to vec[end_ptr].
    int start_ptr, end_ptr;
    int max_sum;

    public:
    // Get Vector.
    Vec_dat();
    ~Vec_dat();
    // Input data to Vector.
    void inputVec();
    // Calculate Max sum and two ptr
    void calMax();
    // Print Vector
    void printVec();
    // Get the private variable
    static int getNum();
    int getStartPtr();
    int getEndPtr();
    int getMaxSum();
    // Static Function
    //     Set the private variable
    static void setNum(int num_);
    //     Add two Vec_dat and return the answer
    //static Vec_dat& add(Vec_dat vd_1, Vec_dat vd_2);

    static void add(const Vec_dat& vd_1, const Vec_dat& vd_2, Vec_dat& vd_new, bool isCal);
    // Operator
    //Vec_dat& operator=(Vec_dat& vd);
};

class Mat_dat{
    private:
    Vec_dat *mat;
    static int num;

    public:
    Mat_dat();
    
};

#endif