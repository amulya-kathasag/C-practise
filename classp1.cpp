#include<iostream>
using namespace std;

class NameCls{
    public: void NameFunc(){
        cout<<"I'm a function inside a class"<<endl;
    }
};
int main(){
    NameCls NameClsVar;
    NameClsVar.NameFunc();
}