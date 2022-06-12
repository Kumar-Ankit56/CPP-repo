///Overloading of insertion and Extraction operation.
#include<iostream>
using namespace std;
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
    friend ostream& operator<<(ostream&,Complex);
    friend iostream& operator>>(iostream&,Complex&);
};
ostream& operator<<(ostream& dout, Complex c){
    cout<<"\na"<<c.a<<"b"<<c.b<<endl;
    return(dout);
}
iostream& operator>>(iostream&din,Complex&c){
   cin>>c.a>>c.b;
   return (din);
}
int main()
{
    Complex c1;
    cout<<"Enter a complex number";
    cin>>c1;
    //By this above code >> extraction. So, by analogy i can say that the class of object cin in is in which there will be multiple reference of << operator will be declare as I'm saying that we often see that there is different kind of argument we passed like
    //Some time int type and float type but there will not be Complex data type so it will show an error.
    //Alternate solution
    //cin.operator>>(c1); //here it making things more clear that Cin is object and calling a function that is operator>> and passing the argument of c1;
    cout<<"You Entered"<<endl;
    cout<<c1;
    //Alternative understanding
    //operator<<(c1,cout);
    //Whom cout is object of class there will be a lot different version of insertion able.
    return 0;
}

