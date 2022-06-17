#include<iostream>
using namespace std;
class Complex {
private:
    int a,b;
public:
    Complex(){
    }
    Complex(int x){
       a=x;
       b=0;
    }
    void setData(int x, int y){
       a=x;
       b=y;
    }
    void showData(){
      cout<<"a="<<a<<"\nb="<<b<<endl;
    }
    operator int(){
       return(a);
    }
};
int main(){
Complex c1;
c1.setData(3,4);
c1.showData();
int x;
x=c1; // x=c1.operator int()
cout<<"x="<<x;
return 0;
}

