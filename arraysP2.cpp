#include <iostream>
using namespace std;
#define Len(ary)(sizeof(ary)/sizeof(*ary))
int SumFnc(int AryPsgVar[])
{
    int SumVar= 0;
    for (int i=0;i<5;i++)
    {
         
        cout<<AryPsgVar[i]<<endl;
        SumVar+=AryPsgVar[i];
       
    }
    return SumVar;

}


int main()
{
    int NamAryVar[] = {1,23,4,5,9};
    int ResultVar= SumFnc(NamAryVar);
    cout<<ResultVar<<endl;
}