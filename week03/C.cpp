#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#ifndef N
#define N 101
#endif
using namespace std;



int find_unique(int (&a)[N]) {
    
unsigned long long int r = 0;
unsigned long long int y = 0;
unsigned long long int k = 0;
unsigned long long int q = 0;
int n = sizeof(a)/sizeof(a[0]);
 
    std::sort(a, a + n);
    for (k = 1; k < N-1;++k){
    if (a[k] != a[k-1] and a[k] != a[k+1]) {
    	q = a[k];
    }
    }
    if (a[0] != a[1]) {
    	q = a[0];
    }
    if (a[N-1] != a[N-2]) {
    	q = a[N-1];
    }
    return q;
 }

int main() {
    int a[101] = {0};
    a[1] = 197; 
    int n = sizeof(a)/sizeof(a[0]);
 
    std::sort(a, a + n);
    cout <<find_unique(a);
    return 0;
}