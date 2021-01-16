#include<iostream>
using namespace std;

int max_of_four(int a,int b,int c, int d){
    if(a<b)
        a=b;
        //b=a;
    if(a<c)
        a=c;
    if(a<d)  
        a = d;
 return a;      
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res = max_of_four(a,b,c,d);
    cout<<res<<endl;
}