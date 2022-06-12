// In this program we will learn how we can make a function of  a class to friend of different class Let's Div into it.
#include<iostream>
using namespace std;

class Complex;
class Calculator{
 public:
    int add(int a, int b){
     return(a+b);
    }
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};


class Complex{
     int a,b;
     ///This is not real way to declare like  if you have 100 of function in your class and you want to declare all function as friend Function of class Complex.
     /*friend int Calculator::sumRealComplex(Complex o1, Complex o2);
     friend int Calculator::sumCompComplex(Complex o1, Complex o2);*/

    /// This is alter method to do task

    friend class Calculator;
 public:
    void setNumber(int o1, int o2){
       a=o1;
       b=o2;
    }
    void printNumber(){
         cout<<"Your Number is "<<a<< " and " <<b<<endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
      return (o1.a+o2.a);
    }


int Calculator::sumCompComplex(Complex o1, Complex o2){
      return (o1.b+o2.b);
    }

int main(){
    Complex o1,o2;
    o1.setNumber(2,4);
    o2.setNumber(4,5);

    o1.printNumber();
    o2.printNumber();


    Calculator cal;
    int res=cal.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is " << res <<endl;

    int res1=cal.sumCompComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is " << res1 <<endl;


return 0;
}




