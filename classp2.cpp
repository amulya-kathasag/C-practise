#include<iostream>
using namespace std;

class PersonCls{
    public:
    string name,MobNum,email;

    void SetPersonInfoFnc(string namePsg, string MobPsg, string emailPsg){
        name = namePsg;
        MobNum = MobPsg;
        email = emailPsg;
    }
    void displayFnc(){
        cout<<"Name is "<<name<<endl;
        cout<<"Mobile is "<<MobNum<<endl;
        cout<<"Email is "<<email<<endl<<endl;
    }
};
int main(){
    PersonCls  AmulyaVar;
    AmulyaVar.SetPersonInfoFnc("Amulya Kathasagaram","8897447991","hello@gmail.com");

    PersonCls AnanthaVar;
    AnanthaVar.SetPersonInfoFnc("Anantha","889916478","anu@gmail.com");

    AmulyaVar.displayFnc();
    AnanthaVar.displayFnc();

}