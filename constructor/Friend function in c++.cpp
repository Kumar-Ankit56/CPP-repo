#include<iostream>
using namespace std;

///Complex  number 1+4i and 5+8i ==6+12i;

class Complex{
    int a,b;
public:
    void setNumber(int n1, int n2){
      a=n1;
      b=n2;
    }
    ///Below line means that non-member sumComplex function is allowed to do anything with my private variable
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout<<"Your Complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){

    Complex c1, c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();
    c2.setNumber(2,4);
    c2.printNumber();


    sum=sumComplex(c1,c2);
    sum.printNumber();
 return 0;
}

/// Properties of friend functions,
/*1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be caled from the object of that class. c1.sumComplex()==invalid_argument
3. Can be inoveked without the help of any object.
4. usally containes arugument as object.
5. can be declared inside private and public part of class
6. it can't be accessed the member directly by using their name need object_name.member_name to access any memeber.*/
