#include <iostream>
#include <string>
#include <cmath>
//#ifndef N
//#define N 100
//#endif
struct Student {
    std::string name;
    int mark;
};

int main() { 
    Student F[10];
    Student M[10];
    M[9].name = "f";
    int arr[10] = {1};
    for (int i = 0; i<10;++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << arr[11];
    return 0;
}
