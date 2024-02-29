#include <iostream>
#include <string>
#include <cmath>

#ifndef N
#define N 5
#endif


#ifndef M
#define M 2
#endif
using namespace std;
void sort2d(int (&array)[N][M]) {
    int q = 0;
    int l = 0;
	int b = 0;

	int v = 0;
	int &f = v;
    int &c = q;
    int i = 0;
 	int	j = 0;
	int y = 0;
	int n = 0;
    int r = 0;
	int k = N*M;
    int arr[N*M + 1] = {0};
    for (i = 0; i < N; ++i){
        for (j = 0; j < M; ++j ){
            arr[c] = array[i][j];
                ++c;
            
        }

    }

    for ( r = 0; r <= k; ++r) {
        for (y = 0; y < k-1; ++y) {
            if (arr[y] > arr[y+1]){
                n = arr[y+1];
                arr[y+1] = arr[y];
            	arr[y] = n;
            }
            else {
                continue;
            }
        }
    
            
        
        
    }
	
  	for (l = 0; l < N; ++l){
        for (b = 0; b < M; ++b){
            array[l][b] = arr[f];
            ++f; 
          
        }  
    
 }
 }

int main() {
    int i = 0;
    int j = 0;
    int n = 0;
    int y = 0;
    int array[N][M] ;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < M; ++j) {
            array[i][j] = 1;
        }
    }
    array[0][0] = 23;
    array[4][1] = 0;
    sort2d(array);
    cout << ' ' << endl;
       for (n = 0; n < N; ++n) {
        
        for (y = 0; y < M; ++y) {
            if (y != M -1) {
                cout << array[n][y] << ' ';
            }
            else {
                cout << array[n][M-1] << endl;
            }
        }
    }
    
    return 0;
}