#include <iostream>
#include <chrono>
#include <random>

//using namespace std;
void f1(int* arr, int b, int N) {
    int i = 0;
    bool q = false;
    bool &u = q;
    for (i = 0; i < N; ++i) {
        if (arr[i] == b) {
            u = true;
            break;
        }
        else{
            u = u;
        }
    }
    std::cout << q << '\r' ;
}


int main ( ) {
    int arr1[400000] = {0};
    int arr[] = {1,2,3,4,5,6,7,8,9,0 ,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41};
    int arr2[] = {21,22,23,24,25, 99,99,99,99,99,99,99,99,99,99,99,99,1,2,3,4,5,6,7,8,99,99,0,0,0,5,6,7,8,4,99,99,5,6};
    int i = 0;
    int*ptr;
    long long int n = 400000;
    ptr = new int[n];
    unsigned seed = 1001;
    std::default_random_engine rng (seed) ;
    std::uniform_int_distribution<unsigned> dstr(0 , 40 ) ;
    for (unsigned counter = 80; counter != 0 ; --counter)
    for (i = 0; i < n;++i) {
    ptr[i]=arr[dstr(rng)];
    }
    int b = arr2[dstr(rng)];
 

    auto begin = std::chrono::steady_clock::now( );
    for( unsigned cnt = 1000; cnt != 0; --cnt)
    f1(ptr,b,n);
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
    std::cout << b;
    delete[] ptr;
    return 0;
 }