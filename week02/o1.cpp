#include <iostream>
#include <string>
#include <cmath>

using namespace std;
bool is_square(uint64_t num) {
    bool u = false;
    unsigned long long int k = 1;
    unsigned long long int n = 0;
    unsigned long long int m = 0;
    if (num == 1){
        u = true;
    }
    else if (num == 2 or num == 3) {
        u = false;
    }
    else {
        if ((long double )(sqrt(num))*(long double)(sqrt(num)) == num){
            u = true;
        }
        else {
            u = false;
        
        }
    }
    
        return u;
}




int main() {
    unsigned long long int num = 0;
   cin >> num ;
   cout << is_square(num) << endl;
    return 0;
    }