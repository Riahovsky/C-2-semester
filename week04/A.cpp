#include <iostream>
#include <string>
#include <cmath>

#ifndef N
#define N 100
#endif
using namespace std;

int main() { 
    double t  = 3.1415;
    double tt = 9.99999;
    double k = 0;
    double* ptr_double = &t;
    ptr_double = &k;
    cout << ptr_double << ' ' << *ptr_double << endl;
    ptr_double = ptr_double - 3;
    cout << ptr_double << ' ' << *ptr_double << endl;
    ptr_double = &k;
    ptr_double = ptr_double + 5;
    cout << ptr_double << ' ' << *ptr_double << endl;

    return 0;
}