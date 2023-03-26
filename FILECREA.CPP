#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main(){
 fstream F;
 F.open("demo.txt",ios::out);
 if (!F){
 cout<<"Error while creating files"<<endl;}
 else{
 cout<<"File created successfully"<<endl;}
 F.close();
 getch();
 return 0;



 }