#include<iostream>
#include<math.h>
using namespace std;

#define print(p)(cout<<p<<endl)

// class Mobile{
// public:
//     string Processor;
//     string Camera;

// };

//OR

// struct Mobile{

//     string Processor;
//     string Camera;

// };


struct Triangle{
    int height;
    int base;
    Triangle(int heightPsg, int basePsg){
        height = heightPsg;
        base = basePsg;
    }

    int hypotFnc(){
        return sqrt(pow(height,2)+pow(base,2));
    }
};
int main(){

    // Mobile SamsungMobVar;
    // SamsungMobVar.Processor = "Exynos 990";
    // SamsungMobVar.Camera = "108 MP";
    // print(SamsungMobVar.Processor);
    // print(SamsungMobVar.Camera);

    Triangle TriangleVar(3,4);
    int ResultVar = TriangleVar.hypotFnc();
    print(ResultVar);
    
}