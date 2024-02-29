#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double c = 0;
    double k = 0;
    int a = 0;
    int b = 0;
    cin >> a >> b;
    k = pow(a,2) + pow(b,2);
    c = pow(k,0.5);
    cout << c  ;
    return 0;
}