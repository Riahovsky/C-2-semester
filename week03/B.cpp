#include <iostream>
#include <string>
#include <cmath>

#ifndef N
#define N 10
#endif
using namespace std;
void print_array (int arr[N]) {
    for (int i = 0; i <N ; ++i) {
        cout << arr[i] << endl;
        arr[i] = i;
    }
}
int main() {
    const int size =12;
    int arr1[N] = {0};
    int arr2[N] = {2};
    int &ref = arr1[0];
    print_array(arr1);
    return 0;
}