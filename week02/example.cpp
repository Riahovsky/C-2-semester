#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sum_ab(int a, int b) {
    cout << "int overload of sum_ab" << endl;
    return a+b;
}

double sum_ab(double a, double b) {
    cout << "double overload of sum_ab" << endl;
    return a+b;
}

void print(int a) {
    cout << "You put number " << a << endl;
}

int main() {
    float x = 0, y = 1;
    cin >> x >> y;
    cout << sum_ab(x,y) << endl;
    print(sum_ab(x, y));
    return 0;
}
