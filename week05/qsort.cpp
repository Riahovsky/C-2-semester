#include <iostream>
#include <string>
#include <cmath>

//#ifndef N
//#define N 100
//#endif
using namespace std;
void qsort(int *arr, int N) {
    int i = 0;
    int j = N - 1;
    int m = arr[N/2];
    do {
    while(arr[i] < m) {
        i++;
    }
    while(arr[j] > m) {
        j--;
    }
    if (i <= j) {
        swap(arr[i], arr[j]) ;

        i++;
        j--;
    } } while(i <= j);

    if (j > 0) {
        qsort(arr,j+1);
    }
    if (i < N) {
        qsort(&arr[i], N-i);
    }

}

int main() { 
    int arr[10] ={0,1,7,9,4,7,4,8,2,6};
    int* arr1 = arr;
    int i = 0;
    qsort(arr1,10);
    for (i = 0;i < 10;++i) {
        cout << arr[i] << ' ' ;
    }
    return 0;
}
