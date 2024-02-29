#include <iostream>
#include <string>
#include <cmath>

#ifndef N
#define N 100
#endif
using namespace std;

int main() { 
    short int k = 0;
    short int arr[10] = {0};
    short int *ptr_shi ;
    ptr_shi = new short int[10];
    for (k = 0; k < 10; ++k) {
        ptr_shi[k] = k;
    } 
    for (k = 0; k < 10; ++k) {
        cout << &ptr_shi[k]  << ' ';
        // cout << (ptr_shi + k)  << ' ';
    } 
    cout <<  ' '  << endl;
    for (k = 0; k < 10; ++k) {
        cout << ptr_shi[k]  << ' ';
    } 
    for (k = 0; k < 10; ++k) {
        ptr_shi[k] = ptr_shi[k]*ptr_shi[k];
    //     ptr_shi+k = ptr_shi[k]*ptr_shi[k];
    } 
    cout <<  ' '  << endl;
     for (k = 0; k < 10; ++k) {
        cout << ptr_shi[k]  << ' ';
    } 

    return 0;
}