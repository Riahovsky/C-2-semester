#include <iostream>
#include <string>
#include <cmath>

//#ifndef N
//#define N 100
//#endif
using namespace std;

bool reserve_memory(size_t N, int *&ptr) {
    bool u = false;
    if ((ptr) != nullptr) {
        u = false;
    }
    else {
    ptr = new int[N];
    u = true;
    }
    return u;
}

void free_memore(int*& ptr) {
    delete[] ptr;
}


int main() { 
    int N = 0;
    int* ptr = nullptr;
    cin >> N;
    cout << reserve_memory(N, ptr);
    free_memore(ptr);
    return 0;
}
