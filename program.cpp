#include<iostream>
using namespace std;

int main(){
    // input variable = 10000000,20000000,30000000, 100000,200000,300000
    //input 1000, 2000, 3000
    //output = 1 cr, 2 cr, 3 Cr or 1 L, 2L, 3L or 1 K

    long number;
    cout<<"Enter a number ";
    cin>>number;

    
    
    if((number >=10000000)){
        number = number/10000000;
        cout<<number<<" Cr"<<endl;
    }
    else if((number >=100000) ){
        number = number/100000;
        cout<<number<< " L"<<endl;
    }
    else if((number >999)){
        number = number/1000;
        cout<<number<<" K"<<endl;
    }
    else{
        cout<<"Number is not in the range";
    }
    return 0;
}