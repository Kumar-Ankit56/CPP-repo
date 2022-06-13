#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;

public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a is: "<<a<<"  b is: "<<b<<endl;;
    }
    friend void fun(Complex); ///as by previous lecture we have seen friend function is only declare in the class scope can be anything but it will defined.
    ///it will defined by those obj who are using this class
};
///As you can see below code i have't use any scope resolution operator as it used for member of the function but below function is seperate function
void fun(Complex c1)
{
    cout<<"Sum of the number is :"<<c1.a+c1.b<<endl;
}//we also cant do it as it has power to access the member of its friend class but it cant d direct. it is so because it not giving any sense that which is their obbject as c1,c2 or anything.
int main()
{
    ///c.fun() this is also wrong as it is not a memeber function so it shouldn't have any colleer object.
    Complex c1,c2,c3;
    c1.setdata(4,5);///set function is called by c1. so the a and b is value of coller.
    ///but in friend function we have no coller object.
    c1.showdata();
    fun(c1);
    return 0;
}
