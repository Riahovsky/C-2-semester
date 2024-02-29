#include <iostream>
#include <chrono>
#include <random>

//using namespace std;
bool findx(int arr[], int b, long long int N) {
    int i = 0;
    int k = 0;
    int l = 0;
    bool q = false;
    bool &u = q;
    unsigned l_idx = 0;
    unsigned r_idx = N-1;
    for (k = 0; k < N; ++k) {
        l = b - arr[k];
    while (l_idx < r_idx) {
       unsigned pivot_idx = (l_idx +r_idx) / 2;
       if (l < arr[pivot_idx]) {
        r_idx = pivot_idx;
       }
       else if (arr[pivot_idx] < l) {
        l_idx = pivot_idx + 1;
       }
       else {
        q = true;
        break;
       }
    
    }
    if (q == true) {
        break;
    }
    }
    return q ;
}


int main ( ) {
    int i = 0;
    int*ptr;
    long long int n = 70000;
    int b = 123*n;
    ptr = new int[n];
    ptr[n-1] = n;
    ptr[n-2] = n;
    for (i = 0; i < n-2;++i) {
    ptr[i]=1+i;
    ptr[i]=1+i;
    }

    auto begin = std::chrono::steady_clock::now( );
    for( unsigned cnt = 1000; cnt != 0; --cnt)
    std::cout << findx(ptr,b,n);
    auto end = std::chrono::steady_clock::now( );
    auto time_span =
    std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    std::cout<< "\n\n";
    std::cout<< time_span.count( ) <<std::endl;
    std::cout << std::endl;
   //for (i = 0; i < n;++i) {
    //std::cout << ptr[i] << ' ';
    //}
    //std::cout << std::endl;
    delete[] ptr;
    return 0;
}