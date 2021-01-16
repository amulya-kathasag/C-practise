#include<iostream>
using namespace std;

#define Len(Ary)(sizeof(Ary)/sizeof(*Ary))

int main(){
    int IntArrayVar[] = {10,20,30,40};
    //cout<<IntArrayVar[0];

    for(int i = 0; i<Len(IntArrayVar);i++){
            cout<<IntArrayVar[i]<<endl;
            //cout<<Len(IntArrayVar)<<endl;
    }

    string StringArrayVar[] = {"Amulya","Anantha","Anulekha"};

    for(int i = 0; i<Len(StringArrayVar);i++){

        cout<<StringArrayVar[i]<<" is my "+to_string(i+1)+" Best friend"<<endl;
    }

    int SalaryVar[] = {20000,25000,30000,40000};
    string employeeVar[] ={"Amulya","Anantha","Anulekha","Anitha"};
    for(int j = 0; j<Len(SalaryVar); j++){
        cout<<"Hello "<<employeeVar[j]<<"! \nYour account has been credited Rs."<<SalaryVar[j]<<endl;
    }

}