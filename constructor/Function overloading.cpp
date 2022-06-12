#include<iostream>
using namespace std;

/*/int add(int a, int b){
    cout<<"Using function with 2 argument"<<endl;
    return a+b;
}*/
int add(float a, int b){
    cout<<"Using function with 2 argument"<<endl;
    return a+b;
}
int add(int a,int b, int c){
    cout<<"Using function with 3 argument"<<endl;
   return a+b+c;
}
//Function overloading is means that it has one name but woks different.
//Calculate the volume of cyilnder
int volume(double r,int h){
return(3.14*r*r*h);
}
//Calculate the volume of cube
int volume(int a){
  return (a*a*a);
}

//Calculate rectangular box valume.
int volume(int l,int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3,7 and 6 is "<<add(3,7,6)<<endl;
    cout<<"The volume of cuboid 3,7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder 3,and 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube  side is 5  is "<<volume(5)<<endl;
return 0;
}
