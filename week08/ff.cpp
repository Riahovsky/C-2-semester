#include <iostream>
#include <string>
#include <cmath>
struct LAB {
    int left = 0;
    int right = 0;
};

using namespace std;
int main() {
    int i,n = 1;
    int eee = 0;
    int time = 0;
    int s,f = 0;
    int N = 100;
    cin >> N;
    LAB* l = new LAB[N];
     for (i = 0; i < N;++i) {
        cin >> s;
        l[i].left = s;
        cin >> f;
        l[i].right = f;
    }
    time = l[0].right - l[0].left;
    
    for (i = 1; i < N;++i) {
        if (l[i].left <= l[i-1].right) {
            time = time + l[i].right - l[i-1].right + 1;
        }
        else {
            time = time + l[i].right - l[i].left +1;
        }
       
    }
cout << time;
     return 0;
}