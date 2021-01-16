// math functions
// string functions
// array functions
// date and time functions
// files and folders
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
float x = -33.99; // -33 is greater than -34
string str1 = "Amulya";
string str2 = "Amulya ";
int str3 = str1.compare(str2);

if(str3 == 0){
    cout<<"equal"<<endl;
}
else
    cout<<"Not Equal"<<endl;

// cout<<ceil(x)<<endl; 
// cout<<floor(x)<<endl;

}