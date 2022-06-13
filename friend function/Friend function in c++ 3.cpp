/// Problem statement is a friend function can be friend many function at a time.
//by program and by definition of friend function fun you can look that it is accessing private member of two different class with in a single operation.
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
public:
    void setNumber(int n1 )
    {
        a=n1;

    }
    friend void fun(A,B);
};
class B
{
private:
    int b;
    friend void fun(A,B);
public:
    void setNumber(int n1 )
    {
        b=n1;

    }
};
void fun(A o1, B o2)
{
    cout<<"Sum is:"<<o1.a+o2.b;
}
int main()
{
    A obj1;
    obj1.setNumber(5);
    B obj2;
    obj2.setNumber(4);
    fun(obj1,obj2);
}

//A function can be friend of many classes
