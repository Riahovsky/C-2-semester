#include <iostream>
#include <chrono>
#include <random>

void B(int* arr, int b, int N) {
    int i = 0;
    int j = 0;
    int y = 0;
    bool q = false;
    bool &u = q;
    for (i = 0; i <= N-1; ++i) {
        if (arr[i] == b) {
            j = i;
            u = true;
            break;
        }
        else{
            u = u;
        }
    
    if (u == true) {
        if (j >=1) {
            y = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = y;        }
    }
    }
    std::cout << q << '\r' ;
}


int main ( ) {
   //int arr1[1000] = {0};
   //int arr[] = {1,2,3,4,5,6,7,8,9,0 ,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,};
    int arr[] = {1,2,3,4,5,6,7,8,9,0 ,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41};
    //int arr2[] = {1,2,32,33,34,42,42,42,42,42,42,42,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
    int arr2[] = {1,42,2,42,3,42,4,42,5,42,6,42,7,42,8,42,9,42,10,42,11,42,12,42,13,42,14,42,15,42,16,42,17,42,18,42,19,42,20,42,21,42,22,42,23,42,24,42,25,42,26,42,27,42,28,42,29,42,30,42,31,42,32,42,33,42,34,42,35,42,36,42,37,42,38,42,39,42,40,42,41,42};
    int i = 0;
    //int arr3[] = {1,2,32,33,34,42,42,42,42,42,42,42,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3};
    int arr3[] = {1,42,2,42,3,42,4,42,5,42,6,42,7,42,8,42,9,42,10,42,11,42,12,42,13,42,14,42,15,42,16,42,17,42,18,42,19,42,20,42,21,42,22,42,23,42,24,42,25,42,26,42,27,42,28,42,29,42,30,42,31,42,32,42,33,42,34,42,35,42,36,42,37,42,38,42,39,42,40,42,41,42};
    int*ptr;
    int n = 50000;
    ptr = new int[n];
    unsigned seed = 1001;
    std::default_random_engine rng (seed) ;
    std::uniform_int_distribution<unsigned> dstr(0 , 40 ) ;
    for (unsigned counter = 45; counter != 0 ; --counter)
    for (i = 0; i < n;++i) {
    ptr[i]=arr[dstr(rng)];
    }
    int b = arr2[dstr(rng)];
    //std::cout << b;
    //std::cout << std::endl;
    //for (i = 0; i < n;++i) {
    //std::cout << ptr[i] << ' ';
    //}
    std::cout << std::endl;
    auto begin = std::chrono::steady_clock::now( );
    for( unsigned cnt = 1000; cnt != 0; --cnt) {
    B(ptr,b,n);
    b = arr3[dstr(rng)];
    }
    auto end = std::chrono::steady_clock::now( );
    auto time_span =
    std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    std::cout<< "\n\n";
    std::cout<< time_span.count( ) <<std::endl;
    //std::cout << std::endl;
    //for (i = 0; i < n;++i) {
    //std::cout << ptr[i] << ' ';
    //}
    //std::cout << std::endl;
    //std::cout << b;
    //std::cout << std::endl;
    //delete[] ptr;
    //for (i = 0; i < n;++i) {
    //std::cout << ptr[i] << ' ';
    //}

    return 0;
 }