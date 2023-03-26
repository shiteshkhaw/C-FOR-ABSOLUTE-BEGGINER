#include<iostream.h>
#include<conio.h>
class Base{
 public:
 void print(){
 cout<<"Base class"<<endl;
 }
};

class Derrived: public Base{
 public :
 void print(){
 cout<<"Derrived Class"<<endl;
  Base::print();}
 };

int main(){
 clrscr();
 Derrived d1;
 d1.print();
 getch();
 return 0;

}
