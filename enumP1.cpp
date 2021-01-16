#include<iostream>
using namespace std;

enum Direction{north,south,east,west};
enum Week{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main(){

Direction houseDoorVar;
houseDoorVar = east;
cout<<houseDoorVar<<endl;

Week weekDayVar;
weekDayVar = Thursday;
cout<<weekDayVar<<endl;

}