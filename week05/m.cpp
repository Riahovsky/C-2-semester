#include <algorithm>
#include <iostream>
#include <string_view>
#include <vector>
using namespace std;
int j (int s[100]) {
    int f = 0;
    return f;
}
void f(int a, int b) {
    a = a+b;
cout << a;
}
int main() {
    int a = 0;
    int b = 100;
    f(a,b);
    for (int i = 0; i < 10; ++i ) {
        int j = 0;
        cout << j;
    }
    cout << endl;
    cout << a;
    int& g = a;
    cout << endl;
    cout << g;
    cout << *&a;
    int arr[10] = {0};
    cout << arr[12];
    int *iii = arr;
    cout << endl;
    cout << *(iii+1);
    int &eee = *arr;
    cout << endl;
    cout << &(a);
    return 0;
}