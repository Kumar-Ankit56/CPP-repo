#include<iostream>
using namespace std;
class Integer {
   private:
       int x;
   public:
    void setData(int a){
        x=a;
    }
    void showData(){
       cout<<"\nx="<<x;
    }
   Integer operator ++ (){
       Integer i;
       i.x=++x;
       return (i);
    }
   Integer operator ++ (int){
       Integer i;
       i.x=x++;
       return (i);
    }

};
int main(){
   Integer i1,i2;
   i1.setData(4);
   i1.showData();

   //i2=++i1;
    i2=i1++;
    //i2=--i1;
   //i2=i1.operator++();

   i1.showData();
   i2.showData();

return 0;
}
