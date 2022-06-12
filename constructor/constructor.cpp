#include<iostream>
using namespace std;
class Complex{
  int a,b;
  public:
      //Creating a constructor
      //Constructor id a special memeber function in the same name as of the class.
      //it is used initialize the objects of its class.
      //It is automatically invoked whenever a object is created.

      Complex(void);
      void printnumber(){
         cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
      }
 };
 Complex::Complex(void){
     a=10;
     b=0;
 }
int main(){
    Complex c1,c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
return 0;
}
