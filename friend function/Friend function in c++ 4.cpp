///.Overloading of operator as friend operator
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
        cout<<"\na="<<a<<"b="<<b<<endl;
    }
    /*Complex operator+(Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }*/
    friend Complex operator+(Complex, Complex);
};
void operator+(Complex c, Complex d){
        Complex temp;
        temp.a=c.a+d.a;
        temp.b=c.b+d.b;
        return(temp);
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(4,6);
    //c3=c1+c2; //c3=c1.operator+(c2);
    c3=c1+c2; //operator+(c1,c2);
    //when ever we declare any unary operator it takes one more argument then member unction of unary operator.
    c3.showdata();
    return 0;
}



