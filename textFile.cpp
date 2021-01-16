#include<iostream>
using namespace std;

int main(){
    string Str1;
    cin>>Str1;
    FILE *FileVar;
    FileVar = fopen("abc.txt","w");
    if(FileVar == NULL){
        cout<<"File Not Found"<<endl;
    }
    else{
        for(int i = 0;i < Str1.length();i++){
            fputc(Str1[i],FileVar);
        }
        cout<<"Successfully saved!"<<endl;
    }

}