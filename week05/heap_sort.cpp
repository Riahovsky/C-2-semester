#include <iostream>
#include <string>
#include <cmath>

//#ifndef N
//#define N 100
//#endif
using namespace std;

union RecordType    // Declare a simple union type
{
    char   ch;
    int    i;
    long   l;
    float  f;
    double d;
    int *int_ptr;
};


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
cout << endl;
     int yy, uu = 5;
     cout << yy;
int k = 0;
cout << endl;
     for (i = 0; i < 10; ++i) {
++k;
     }
    RecordType t;
    t.i = 5; // t holds an int
    t.f = 7.25; // t now holds a float
int * ptr = &k;

int const qqq = 0;
int const www = 1;

int const* q = &qqq;
q = &www;
cout << *q;
    return 0;
    
}
