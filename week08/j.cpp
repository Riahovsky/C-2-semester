#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void result(long long int M,long long int N) {
   if (M == 1) {
        cout << N;
    }
    else {
       //long long int r[10] = {0};
        long long int n = 1;int i = 0;
       long long  int m = 1;
       int y = 0;
       while (M*n - m*N < 0 ) {
            ++n;
            if (M*n - m*N >= 0) {
               // r[i] = n;
                ++i;
                ++y;
                cout << n << ' ';
                if ((M*n - m*N) == 0) {
                    break;
                }
                M = M*n - m*N;  
                //cout << M << ' ';
                N = N*n;
                //cout << N << ' ';
                n = 1;
                //if ((M*n - m*N) == 0) {
                //    break;
                //}
            }
       } 
/////////////////
   
        
/////////////
       //i = 0;
      // while (r[i] != 0) {
       // if (r[i+1] == 0) {
        //    cout << r[i];
         //   break;
        //}
        //else {
         //   cout << r[i] <<' ';
         ///   ++i;
        //}
       //}
    } 
}
int main() {
   long long int M = 0;cin >> M;
    long long int N = 0;cin >> N;
    result(M,N);
    return 0;
}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void result(long long int M,long long int N) {
   if (M == 1) {
        cout << N;
    }
    else {
       long long int r[10] = {0};
        long long int n = 1;int i = 0;
       long long  int m = 1;
       int y = 0;
       while (M*n - m*N < 0 ) {
            ++n;
            if (M*n - m*N >= 0) {
                r[i] = n;
                ++i;
                ++y;
                //cout << n << ' ';
                if ((M*n - m*N) == 0) {
                    break;
                }
                M = M*n - m*N;  
                //cout << M << ' ';
                N = N*n;
                //cout << N << ' ';
                n = 1;
                //if ((M*n - m*N) == 0) {
                //    break;
                //}
            }
       } 
/////////////////
    i = 0;
    m = 0 ;
   
    for (i = 0; i < 7; ++i) {
        if (r[i] > r[i+1] and r[i] != 0 and r[i+1] != 0)  {
            swap(r[i],r[i+1]);
            if (i == 0) {
                i = -1;
     //       }
    //        else {
     //       i-=2;
    //        }

   // }
  //  else {
  //      continue;
  //  }
//}
/////////////
       i = 0;
       while (r[i] != 0) {
        if (r[i+1] == 0) {
            cout << r[i];
            break;
        }
        else {
            cout << r[i] <<' ';
            ++i;
        }
       }
    } 
}
int main() {
   long long int M = 0;cin >> M;
    long long int N = 0;cin >> N;
    result(M,N);
    return 0;
}
