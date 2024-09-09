#include <algorithm>
#include <iostream>
#include <string_view>
#include <vector>
//using namespace std;

struct PriorityQueue {
  int heap[100];
  unsigned last = 0;
};

void push(PriorityQueue &pq, int val) {
  pq.heap[pq.last++] = val;
  std::push_heap(pq.heap,pq.heap+pq.last);
}

int pop(PriorityQueue &pq) {
  int val = pq.heap[0];
  std::pop_heap(pq.heap,pq.heap +pq.last--);
  return val;
}

bool is_empty(PriorityQueue const &pq) {
  return 0 == pq.last;
}

int main() {
  PriorityQueue pq;
  push(pq, 1);
  push(pq, 2);
  push(pq, 7);
  push(pq, 5);

  while (is_empty(pq) == false) {
      std::cout << pop(pq) << ' ';
  }
  
  return 0;

}

/*
#include <stdio.h>
#include <string.h>

void copy_4bytes_to_from(void *dst, void const *src) {
    memcpy (dst, src, 4);
    
}


void reverse_array(int input_array[], unsigned size) {
    unsigned left = 0;
    unsigned right = size - 1;
    while (left < right) {
        auto tmp = input_array[left];
        input_array[left] = input_array[right];
        input_array[right] = tmp;
        ++left;
        --right;
    }
}



int cmp_int(void const *lha, void const *rha) {
    int l = *(int*)lha;
    int r = *(int*)rha;
    int gg;
    if(l < r) {
        gg = -1;
    }
    else if (l > r) {
        gg = 1;
    }
    else {
        gg = 0;
        
    }
    return gg;
}


void swap_buffers(void *buff_a, void *buff_b, std::size_t buff_size) {
    unsigned char *buff_a_ptr = reinterpret_cast<unsigned char*>(buff_a);
    unsigned char *buff_b_ptr = reinterpret_cast<unsigned char*>(buff_b);
    for (std::size_t cnt = 0; cnt != buff_size; ++cnt)
        std::swap(*buff_a_ptr++, *buff_b_ptr++);
}


int* merge_sorted(int const *first_begin, int const *first_end, int const *second_begin, int const *second_end) {
    auto size = (first_end - first_begin) + (second_end - second_begin);
    if (0 == size) return nullptr;
    int *merged = new (std::nothrow) int[size];
    if (nullptr == merged) return nullptr;
    int const *first_src = first_begin;
    int const *second_src = second_begin;
    int *dst = merged;
    while (first_src != first_end and second_src != second_end) {
        if (*first_src < *second_src)
            *dst++ = *first_src++;
        else
            *dst++ = *second_src++;
    }
    
    if (first_src == first_end)
        while (second_src != second_end) *dst++ = *second_src++;
    else
        while (first_src != first_end) *dst++ = *first_src++;
        
    return merged;
}


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    unsigned long long N, M;
    cin >> N >> M;
    if (N < M) {
    swap(N,M);
    }
    
    cout << (0 == N % 2 ? (N / 2 * M) : ((N - 1) / 2 * M + M / 2));
    
    return 0;
}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int min (int a,int b) {
    int m;
    if (a >=b) {
        m = b;
    }
    else {
        m = a;
    }
    return m;
}
int main() {
    int minimal = 0;
    int N = 0;int i = 0;
    cin >> N;
    int a[100000] = {0};
    a[1] = 0;
    for (i = 2; i < N+1; ++i) {
        minimal = a[i-1] + 1;
        if (i%2 == 0) {
            minimal = min(minimal,a[i/2]+1);
        }
        if (i%3 == 0) {
            minimal = min(minimal,a[i/3] + 1 );
        }
        a[i] =minimal; 
    } 
    cout << a[N];
     return 0;
}


*/