#include <iostream>
#include <string>
#include <cmath>

//#ifndef N
//#define N 100
//#endif
using namespace std;

void input_array(int* &ptr, size_t N) {
    int i = 0;
    int n = 0;
    ptr = new int[N];
    while (i < N) {
        cin >> n ;
        ptr[i] = n;
        ++i;

    }
}

void reverse(int* &ptr, size_t N) {
    int i = 0;
	int n = 0;
    int a = 0;
    int b = 0;
    if (N == 1) {
        ptr = ptr;
    }
    else {
    for (i=0; i<= N/2 - 1;++i) {
        n=N-1-i;
        a = ptr[i];
        b = ptr[n];
        ptr[i] = b;
        ptr[n] = a;
    }
    }
}

void print(const int* ptr, size_t N) {
        int i = 0;
        for (i = 0; i < N; ++i) {
            cout << ptr[i] << ' ';
        }
}

int main() { 
    int N = 0;
    int* ptr = nullptr;
    cin >> N;
///////////////////
    input_array(ptr, N);
    reverse(ptr, N);
    print(ptr, N);
//////////////////////////
    return 0;
}
