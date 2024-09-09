#include <iostream>
#include <string>
#include <cmath>
//#ifndef N
//#define N 100
//#endif
struct Particle {
    float radius = 1;
    int mass = 1;
    float x = 0, y = 0;
    float v_x = 0, v_y = 0;
    Particle(){}
    Particle(float radius, float mass, float x_cord, float y_cord,float v_x,float v_y):
    x(x_cord){}
} electron,positrons[10];
struct Empty {};
using namespace std;
void coilder(Particle* electron, Particle* positron) {
    //electron->v_y
    //muon->v_x
}
void print (Particle&){
    cout << electron.x << ' ' ;
}
union Data {
    int i;
    float f;
    double d;
};
int main() { 
    Data unioned_data;
    unioned_data.i = 12;
    unioned_data.d = 12;
    string g = " ";
    Particle f[10];
    string result[9] = {" "};
    //enum class;
    //Particle electron =  Particle(1,1,2,3,3,4);
    //Particle *muon = new Particle[100];
    //electron.x = 12;
    //electron.v_y = - 2.5;
    //positrons[0].v_y = 12;
    //positrons -> v_x = 14;
    //cout << electron.x << ' ' << electron.y << endl;
    //cout << sizeof(electron) << endl;
    //cout << sizeof(positrons) << endl;
    //cout << sizeof(*positron) << endl;
    //print(::electron);
    //cout << g;
    cout << result[0];
    return 0;
}
