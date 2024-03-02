#include <iostream>
#include <string>
#include <cmath>
//#ifndef N
//#define N 100
//#endif
using namespace std;
void gnome(int arr[], int N) {
    int i = 0;
    int m = 0 ;
    int j = 0;
    for (i = 0; i < N-1; ++i) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i],arr[i+1]);
            if (i == 0) {
                i = -1;
            }
            else {
            i-=2;
            }

    }
    else {
        continue;
    }
}
}

int main() { 
    int arr[23] = {3,1,5,6,78,57,5,5674,46,43,4,46,3,1,1,1,46,7,8,5,3,4,5};
    int N = 23;
    int i = 0;
    gnome(arr,N);
    for (i = 0; i < N; ++i) {
        cout << arr[i] << ' ';
     }
    return 0;
}
