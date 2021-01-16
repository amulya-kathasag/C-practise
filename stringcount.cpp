#include <iostream>
using namespace std;




int main (){
    string IptVar = "0110111011110";
     int CountVar = 0; 
    for( int i = 0; i<IptVar.length();i++){
        if(IptVar [i] == '1' && IptVar[i+1] == '1'){
           CountVar++;
           i++; 
        }
            
    }
    cout<< CountVar<<endl;
}