#include<iostream>
using namespace std;
class Complex {
   private:
       int a,b;
   public:
    void setData(int x, int y){
        a=x;
        b=y;
    }
    void showData(){
       cout<<"a="<<a<<"\nb="<<b;
    }
    Complex operator - (){
       Complex temp;
       temp.a=-a;
       temp.b=-b;
       return {temp};
    }
};
int main(){
   Complex c1,c2,c3;
   c1.setData(4,6);
   c2.setData(3,5);
   //here we are trying to add two complex type object with + operator and here + is only can used two primitive data type but it has no idea about two complex type object.
   //c3=c1+c2;

   ///Normal function calling
   //c3=c1.add(c2);


   //c3=c1.operator +(c2);
   ///its alternative is avilable as
   c3=-c1;
   c3.showData();
return 0;
}
