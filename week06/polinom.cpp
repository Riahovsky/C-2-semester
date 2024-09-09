#include <iostream>
#include <string>
struct Student
{
    std::string name;
    int mark;
};
void gnome(int arr1[],std::string arr2[], int N) {
    int i = 0;
   // int m = 0 ;
   //int j = 0;
    for (i = 0; i < N-1; ++i) {
        if (arr1[i] > arr1[i+1]) {
            std::swap(arr1[i],arr1[i+1]);
        	 std::swap(arr2[i],arr2[i+1]);
            if (i == 0) {
                i = -1;
            }
            else {
            i-=2;
            }

    }
    else {
        continue;
    }
}
}

int main() { 

	int N = 0;
	std::string n ;
	int m = 0;
	std::cin >> N ;
	int i = 0;
	std::string name[N];
	int mark[N] = {0};
	Student student[N];
	for (i = 0; i < N; ++i) {
    	std::cin >> n;
		student[i].name = n;
    	std::cin >> m;
    	student[i].mark = m;
	}
	for (i = 0; i < N; ++i) {
		name[i] = student[i].name;
		mark[i] = student[i].mark;
	}
	int M = 0;
	std::cin >> M;
	gnome(mark,name,N);
	int nomer = 0;
	for (i = 0; i < N; ++i) {
		if(mark[i] >= M) {
			nomer = i;
			break;
		}
	}

	for (i = nomer; i < N-1; ++i) {
    if (mark[i] == mark[i+1] and name[i] > name[i+1]) {
    	std::swap(name[i],name[i+1]);
        if (i == 0) {
                i = -1;
            }
            else {
            i-=2;
            }
    }
	}
	for (i = nomer; i < N; ++i) {
    if(i != N-1) { 
    std::cout << name[i] << ' '; }
    else{std::cout << name[i];}
	}
    return 0;
}
