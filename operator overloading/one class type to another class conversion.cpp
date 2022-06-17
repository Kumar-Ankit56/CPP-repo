#include<iostream>
using namespace std;
class Product{
 private:
    int m,n;
 public:
    void setData(int x, int y){
       m=x;
       n=y;
    }
    int getM(){
      return(m);
    }
    int getN(){
      return(n);
    }

};
class item{
private:
    int a,b;

public:
    void showData(){
      cout<<"\na="<<a<<"\nb="<<b<<endl;
    }
    item(){
    }
    item(Product p){
       a=p.getM();
       b=p.getN();
    }

};

int main(){
item i1;
Product p1;
p1.setData(3,4);
i1=p1;
i1.showData();
return 0;
}
