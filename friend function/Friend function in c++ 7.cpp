///Member function of one class can become friend to another class.
#include<iostream>
using namespace std;
class A{
   public:
       void fun(){
       .....
       }
       //Here we called fun as memeber function of class A.
       //Although by statement of program what we want that making fun as friend function to B.
};
class B{
   //friend void fun(); //It is right per friend function syntax but it is not making more clearfy that it is memeber of class A, fun fuction could be anywhere.
   friend void A::fun();//this is making more clear that it is memeber function of A.

   //if you want to make all function of a class to friend of another class then rather than doing or giving indivisual scope resolution try to do that this,
   friend class A;
};
int main(){

return 0;
}
