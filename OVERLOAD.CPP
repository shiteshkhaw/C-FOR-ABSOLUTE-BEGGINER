#include<iostream.h>
#include<conio.h>
int add(int a, int b){
 cout<<"Function 1 "<<endl;
  return(a+b);
  }

double add(double a, double b){
 cout<<"Function 2 "<<endl;
  return(a+b);
  }
int add(int a, int b , int c){
 cout<<"Function 3 "<<endl;
  return(a+b+c);
  }




int main(){
 clrscr();
 cout<<"Sum Is "<<add(2,3)<<endl;
 cout<<"Sum Is "<<add(2.5,3.7)<<endl;
 cout<<"Sum Is "<<add(2,3,7)<<endl;
 getch();
 return 0;
}