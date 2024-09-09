#include <iostream>
#include <string>
#include <cmath>
int money2 (int p[], int M, int N) {
	int n,k = 0;
	int s = 0;
    for (k = N-1; k >= 0;--k) {
        s = M/p[k];
        n = n + s; 
        M = M - s*p[k];

    }
    
	return n;
}
using namespace std;

int main() {
    int N,i,c = 0;
    cin >> N;
	int *p = new int[N];
    for (i = 0; i < N; ++i) {
        cin >> c;
        p[i] = c;
    }
    int M = 0;
    cin >> M;
    cout << money2(p,M,N);
    delete[] p;
return 0;
}