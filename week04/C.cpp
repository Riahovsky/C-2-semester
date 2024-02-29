#include <iostream>
#include <string>
#include <cmath>

//#ifndef N
//#define N 100
//#endif
using namespace std;

int main() { 
    int i = 0;
    int j = 0;
    int *ptr;
    int N = 1;
    while (N != 0) {
        cin >> N;
        ptr[i] = N;
        ++i;
    }
    if (i >=3) {
    for (j = 0; j < i-2; ++j)
    cout << ptr[j] - ptr[j+1] << ' ';
    }
    else {
        cout << ' ' << endl;
    }
    return 0;
}
