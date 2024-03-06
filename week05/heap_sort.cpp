#include <iostream>
#include <string>
#include <cmath>

//#ifndef N
//#define N 100
//#endif
using namespace std;
void heap(int arr[], int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n and arr[l] > arr[largest]) {
        largest = l;
    }
    if (r < n and arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heap(arr,n,largest);
    }
}

void heap_sort(int arr[], int n) {
    for (int i = n/2 - 1; i >=0; i--) {
        heap(arr,n,i);
    }
    for (int i = n -1; i >=0; i--) {
        swap(arr[0], arr[i]);
        heap(arr,i,0);
    }
}
int main() { 
    int arr[23] = {3,1,5,6,78,57,5,5674,46,43,4,46,3,1,1,1,46,7,8,5,3,4,5};
    int N = 23;
    int i = 0;
    heap_sort(arr,N);
    for (i = 0; i < N; ++i) {
        cout << arr[i] << ' ';
     }
    return 0;
}
