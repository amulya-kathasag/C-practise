#include<iostream>
using namespace std;

class PersonNameCls{
    public:
    string name,MobilNum,email;
    PersonNameCls(){}

    PersonNameCls(string namePsg, string MobilPsg, string emailPsg){
        name = namePsg;
        email = emailPsg;
        MobilNum = MobilPsg;
    }

    void displayfuc(){
        cout<<"name : "<<name<<endl;
        cout<<"Mobile no: "<<MobilNum<<endl;
         cout<<"email: "<<email<<endl<<endl;
    }

};
class AlienwareCls : PersonNameCls{
    public:
    string id;

    AlienwareCls(string namePsg, string MobilPsg, string emailPsg,string idPsg){
        name = namePsg;
        email = emailPsg;
        MobilNum = MobilPsg;
        id = idPsg;
    }
    void displayfuc(){
        cout<<"name: "<<name<<endl;
        cout<<"mobile: "<<MobilNum<<endl;
        cout<<"email: "<<email<<endl;
        cout<<"id: "<<id<<endl;
    }
    

};


int main(){
    PersonNameCls PersonVar("Amulya","9129138902","amu@gmail.com");
    PersonVar.displayfuc();

    AlienwareCls AlienwareVar("amu","123456789","amu@gmail.com","1");
    AlienwareVar.displayfuc();

}