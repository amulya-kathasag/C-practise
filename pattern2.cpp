#include <iostream>
using namespace std;

string Draw_Sqr(int LenVar)
{
    string PenVar = "";
    int k = 2*LenVar-2;
    for (int row = 0; row <=LenVar-1; row++)
    {
        
        for (int col = 0; col < k; col++)
        {
           
                PenVar += " ";
                k+=1;

         for(int col = 0;col<=row;col++){
             cout<<"* ";
         }  
        }
        PenVar += "\n";
    }
    return PenVar;
}


int main()
{
    //input = lenght
    //input = 4

//* * * *
//*     *
//* 
 int Length;
    cout << "Enter a value" << endl;
    cin >> Length;
    cout << Draw_Sqr(Length) << endl;
}
