///Uniary Operator/Caller Object/member function
///This is how we can declare uniary operator as friend Function.
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"\na= "<<a<<" b= "<<b<<endl;
    }
    /*Complex operator -(){
       Complex temp;
       temp.a=-a;
       temp.b=-b;
       return (temp);
    }*/
    friend Complex operator -(Complex);
};
Complex operator -(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return (temp);

};
int main()
{
    Complex c1, c2;
    c1.setdata(3,4);
    c1.showdata();
    //c2=-c1; //c2=c1.operator-();
    //for friend function
    c2=-c1; // c2=operator-(c1)
    c2.showdata();
    return 0;
}
