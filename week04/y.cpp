#include <iostream>
#include <string>
#include <cmath>

#ifndef N
#define N 100
#endif
using namespace std;
int main() { 
    int arr[N] = {0};
    int var0 = 0;
    float var2 = 1234; 
    double var1 = 3.1415;
    double* ptr_double = nullptr;
    ptr_double = &var1;
    //if (!(ptr)) {}
    //double *&ptr;
    //double* ptr_double = new double[20000000000];
    //double* ptr_double = new double;
    //cout << &var0 << ' ' << var0 << endl;
    //cout << &var1 << ' ' << var1 << endl;
    //cout << &var2 << ' ' << var2 << endl;
    //cout << &var0 << ' ' << var0 << endl;
    //delete[] ptr_double;
    //delete ptr_double;
    cout << ptr_double << ' ' << *ptr_double << endl;
    return 0;
}