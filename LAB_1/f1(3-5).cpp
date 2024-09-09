#include <iostream>
#include <chrono>
#include <random>

void f1(int arr[], int b, int N) {
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
    int arr1[450000] = {0};
    int i = 0;

    long long int n = 450000;
    int *ptr;
    ptr = new int[n];
    ptr = arr1;

    
    int b = 0;



    auto begin = std::chrono::steady_clock::now( );
    for( unsigned cnt = 1000; cnt != 0; --cnt)
        f1(arr1,b,n);
    auto end = std::chrono::steady_clock::now( );
    auto time_span =
    std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    std::cout<< "\n\n";
    std::cout<< time_span.count( ) <<std::endl;
    return 0;
 }