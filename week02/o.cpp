#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool is_square(uint64_t num) {
    bool u = false;
    //unsigned long long int d = 0;
    //unsigned long long int r = 0;
    //unsigned long long int k = 1;
    if (num == 1){
        u = true;
    }
    else {
        if (pow(num,0.5)*pow(num,0.5)-num ==0){
            u = true;
        }
        else {
            u = false;
        }
    }
    return u;
}


int main() {
    int num = 0;
    cin >> num  ;
    cout << is_square(num);
    return 0;
}