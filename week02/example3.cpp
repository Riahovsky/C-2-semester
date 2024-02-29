#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int recursive_fib(int n) {
    if (n == 0 or n == 1) {
        return 1;
    }
    else {
    return recursive_fib(n-2) + recursive_fib(n-1); 
    }
}
int main() {
    int n = 0;
    cin >> n ;
    cout << recursive_fib(n) ;
    return 0;
}