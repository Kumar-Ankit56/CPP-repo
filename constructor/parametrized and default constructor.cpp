#include<iostream>
using namespace std;

class Complex{

   int a,b;
   public:
       Complex(int, int);
       void printnumber(){
       cout<<"Your number is :="<<a<<"+"<<b<<"i"<<endl;
       }

};
//parameterized constructor
Complex::Complex (int x, int y){
    a=x;
    b=y;
}
int main(){
   Complex a(4,6);
   a.printnumber();

   Complex b = Complex (5,7);
   b.printnumber();
return 0;
}
