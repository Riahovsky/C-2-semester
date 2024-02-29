#include <iostream>
#include <chrono>
#include <random>

//using namespace std;
bool find(int arr[], int b, long long int N) {
    int i = 0;
    int j = 0;
    bool q = false;
    //bool &u = q;
    for (i = 0; i<N; ++i) {
        if (q == true){
            break;
        }
        for (j = 0; j < N; ++j) {
            if (arr[i]+arr[j] == b) {
                q = true;
                //std::cout << arr[i] << ' '<< arr[j] << std::endl;
                break;

            }
            else {
                q=q;
            }
        }


    }
    if (q =false) {
       // std::cout <<q;
    }
    return q;
    }


int main ( ) {
    int i = 0;
    int*ptr;
    int arr[] = {1,2,3,4,5,6,7,8,9,0 ,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101};
    long long int n = 8000;
    int b = 123*n;
    ptr = new int[n];
    unsigned seed = 1001;
    std::default_random_engine rng (seed) ;
    std::uniform_int_distribution<unsigned> dstr(0 , 100 ) ;
    for (unsigned counter = 93; counter != 0 ; --counter)
    for (i = 0; i < n;++i) {
    ptr[i]=arr[dstr(rng)];
    }

    auto begin = std::chrono::steady_clock::now( );
    for( unsigned cnt = 100; cnt != 0; --cnt)
    find(ptr,b,n);
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