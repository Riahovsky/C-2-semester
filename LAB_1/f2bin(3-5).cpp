#include <iostream>
#include <chrono>
#include <random>

//using namespace std;
void f2(int* arr, int b, long long int N) {
    int i = 0;
    bool q = false;
    bool &u = q;
    unsigned l_idx = 0;
    unsigned r_idx = N-1;
    while (l_idx < r_idx) {
       unsigned pivot_idx = (l_idx +r_idx) / 2;
       if (b < arr[pivot_idx]) {
        r_idx = pivot_idx;
       }
       else if (arr[pivot_idx] < b) {
        l_idx = pivot_idx + 1;
       }
       else {
        q = true;
        break;
       }
    
    }
    std::cout << q << '\r' ;
}


int main ( ) {
    int i = 0;
    int*ptr;
    long long int n = 10000;
    int arr[n] = {0};
    ptr = new int[n];
    int b = 0;
    ptr[n-1] = n;
    ptr[n-2] = n;
    for (i = 0; i < n-3; i = i+2) {
        ptr[i] = 1+i ;
        ptr[i+1] =1+i;
    }
 

    auto begin = std::chrono::steady_clock::now( );
    for( unsigned cnt = 100; cnt != 0; --cnt)
    f2(ptr,b,n);
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
    //std::cout << b;
    delete[] ptr;
    return 0;
 }